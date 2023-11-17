## `sunspider_quickjs_ng`

Running SunSpider on https://github.com/quickjs-ng/quickjs

```bash
git clone https://github.com/littledivy/sunspider_quickjs_ng
cd sunspider_quickjs_ng

git clone https://github.com/quickjs-ng/quickjs
cmake -B build
cmake --build build
./build/quickjs_bench
```

```
File: 3d-cube, Execution Time: 0.0495 seconds
File: 3d-morph, Execution Time: 0.0211 seconds
File: 3d-raytrace, Execution Time: 0.0194 seconds
File: access-binary-trees, Execution Time: 0.0136 seconds
File: access-fannkuch, Execution Time: 0.0338 seconds
File: access-nbody, Execution Time: 0.0128 seconds
File: access-nsieve, Execution Time: 0.0135 seconds
File: bitops-3bit-bits-in-byte, Execution Time: 0.0067 seconds
File: bitops-bits-in-byte, Execution Time: 0.0150 seconds
File: bitops-bitwise-and, Execution Time: 0.0237 seconds
File: bitops-nsieve-bits, Execution Time: 0.0126 seconds
Error InternalError: stack overflow
Error executing file: controlflow-recursive
File: crypto-aes, Execution Time: 0.0180 seconds
File: crypto-md5, Execution Time: 0.0061 seconds
File: crypto-sha1, Execution Time: 0.0058 seconds
File: date-format-tofte, Execution Time: 0.0359 seconds
File: date-format-xparb, Execution Time: 0.0113 seconds
File: math-cordic, Execution Time: 0.0221 seconds
File: math-partial-sums, Execution Time: 0.0114 seconds
File: math-spectral-norm, Execution Time: 0.0086 seconds
File: regexp-dna, Execution Time: 0.0958 seconds
File: string-base64, Execution Time: 0.0182 seconds
File: string-fasta, Execution Time: 0.0508 seconds
File: string-tagcloud, Execution Time: 0.0525 seconds
File: string-unpack-code, Execution Time: 0.0979 seconds
File: string-validate-input, Execution Time: 0.0717 seconds
Total (ms): 730.8080
```