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
File: 3d-cube, Execution Time: 0.0494 seconds
File: 3d-morph, Execution Time: 0.0212 seconds
File: 3d-raytrace, Execution Time: 0.0195 seconds
File: access-binary-trees, Execution Time: 0.0136 seconds
File: access-fannkuch, Execution Time: 0.0336 seconds
File: access-nbody, Execution Time: 0.0128 seconds
File: access-nsieve, Execution Time: 0.0136 seconds
File: bitops-3bit-bits-in-byte, Execution Time: 0.0067 seconds
File: bitops-bits-in-byte, Execution Time: 0.0151 seconds
File: bitops-bitwise-and, Execution Time: 0.0236 seconds
File: bitops-nsieve-bits, Execution Time: 0.0125 seconds
File: controlflow-recursive, Execution Time: 0.0061 seconds
File: crypto-aes, Execution Time: 0.0179 seconds
File: crypto-md5, Execution Time: 0.0061 seconds
File: crypto-sha1, Execution Time: 0.0058 seconds
File: date-format-tofte, Execution Time: 0.0361 seconds
File: date-format-xparb, Execution Time: 0.0113 seconds
File: math-cordic, Execution Time: 0.0219 seconds
File: math-partial-sums, Execution Time: 0.0113 seconds
File: math-spectral-norm, Execution Time: 0.0085 seconds
File: regexp-dna, Execution Time: 0.0962 seconds
File: string-base64, Execution Time: 0.0184 seconds
File: string-fasta, Execution Time: 0.0510 seconds
File: string-tagcloud, Execution Time: 0.0535 seconds
File: string-unpack-code, Execution Time: 0.0981 seconds
File: string-validate-input, Execution Time: 0.0740 seconds

Total (ms): 737.9240
```
