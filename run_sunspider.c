#include "quickjs/quickjs.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

double total = 0;

int execute(JSContext *ctx, const char *filename) {
    char *path = "sunspider-1.0/";
    char *fullpath = malloc(strlen(path) + strlen(filename) + 3);
    strcpy(fullpath, path);
    strcat(fullpath, filename);
    strcat(fullpath, ".js");

    FILE *file = fopen(fullpath, "r");

    if (file == NULL) {
        fprintf(stderr, "Error opening file: %s\n", filename);
        return 1; // Return an error code
    }

    // Get the file size
    fseek(file, 0, SEEK_END);
    long file_size = ftell(file);
    fseek(file, 0, SEEK_SET);

    // Read the file content
    char *buffer = (char *)malloc(file_size + 1);
    if (buffer == NULL) {
        fclose(file);
        fprintf(stderr, "Memory allocation error\n");
        return 1; // Return an error code
    }

    size_t bytesRead = fread(buffer, 1, file_size, file);
    fclose(file);

    if (bytesRead != file_size) {
        fprintf(stderr, "Error reading file: %s\n", filename);
        printf("bytesRead: %zu, file_size: %ld\n", bytesRead, file_size);
        free(buffer);
        return 1; // Return an error code
    }

    buffer[file_size] = '\0'; // Null-terminate the buffer

    // Measure the start time
    clock_t start_time = clock();

    // Execute the JavaScript code
    JSValue ret_val = JS_Eval(ctx, buffer, file_size, filename, JS_EVAL_TYPE_GLOBAL);

    // Measure the end time
    clock_t end_time = clock();
    double execution_time = ((double)(end_time - start_time)) / CLOCKS_PER_SEC;
    total += execution_time;

    if (JS_IsException(ret_val)) {
        printf("Error %s\n", JS_ToCString(ctx, JS_GetException(ctx)));
        JS_FreeValue(ctx, ret_val);
        free(buffer);
        free(fullpath);
        return 1; // Return an error code
    }

    printf("File: %s, Execution Time: %.4f seconds\n", filename, execution_time);

    JS_FreeValue(ctx, ret_val);
    free(buffer);
    free(fullpath);

    return 0; // Success
}

int main() {
    JSRuntime *rt = JS_NewRuntime();
    JSContext *ctx = JS_NewContext(rt);

    // Get LIST of tests
    const char *filename = "sunspider-1.0/LIST";
    FILE *listFile = fopen(filename, "r");

    if (listFile == NULL) {
        fprintf(stderr, "Error opening file: %s\n", filename);
        return 1; // Return an error code
    }

    char buffer[100]; // Adjust the buffer size as needed
    while (fgets(buffer, sizeof(buffer), listFile) != NULL) {
        // Remove newline character if present
        size_t len = strlen(buffer);
        if (len > 0 && buffer[len - 1] == '\n') {
            buffer[len - 1] = '\0';
        }

        if (execute(ctx, buffer) != 0) {
            fprintf(stderr, "Error executing file: %s\n", buffer);
        }
    }

    printf("Total (ms): %.4f\n", total * 1000);

    // Close the LIST file
    fclose(listFile);

    // Cleanup QuickJS
    JS_FreeContext(ctx);

    return 0;
}
