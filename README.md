## `quickjs_ng_benchmarks`

Benchmarking https://github.com/quickjs-ng/quickjs

### Setup

```bash
git clone https://github.com/littledivy/sunspider_quickjs_ng
cd sunspider_quickjs_ng

git clone https://github.com/quickjs-ng/quickjs

cmake -B build
cmake --build build
```

### Usage

```bash
./build/run_sunspider_like <folder>/ <filter>
```
Eg:

```bash
./build/run_sunspider_like kraken-1.0/ ai-astar
```

### SunSpider 1.0

```bash
./build/run_sunspider_like sunspider-1.0/
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

### Kraken

```bash
./build/run_sunspider_like kraken-1.1/
```

```
File: kraken-1.1/ai-astar-data.js, Execution Time: 0.0591 seconds
File: kraken-1.1/ai-astar.js, Execution Time: 1.5074 seconds
File: kraken-1.1/audio-beat-detection-data.js, Execution Time: 0.0072 seconds
File: kraken-1.1/audio-beat-detection.js, Execution Time: 0.9267 seconds
File: kraken-1.1/audio-dft-data.js, Execution Time: 0.0074 seconds
File: kraken-1.1/audio-dft.js, Execution Time: 0.6062 seconds
File: kraken-1.1/audio-fft-data.js, Execution Time: 0.0068 seconds
File: kraken-1.1/audio-fft.js, Execution Time: 0.7826 seconds
File: kraken-1.1/audio-oscillator-data.js, Execution Time: 0.0068 seconds
File: kraken-1.1/audio-oscillator.js, Execution Time: 0.7542 seconds
File: kraken-1.1/imaging-gaussian-blur-data.js, Execution Time: 0.0778 seconds
File: kraken-1.1/imaging-gaussian-blur.js, Execution Time: 7.4164 seconds
File: kraken-1.1/imaging-darkroom-data.js, Execution Time: 0.0790 seconds
File: kraken-1.1/imaging-darkroom.js, Execution Time: 0.9969 seconds
File: kraken-1.1/imaging-desaturate-data.js, Execution Time: 0.0780 seconds
File: kraken-1.1/imaging-desaturate.js, Execution Time: 1.2369 seconds
File: kraken-1.1/json-parse-financial-data.js, Execution Time: 0.0005 seconds
File: kraken-1.1/json-parse-financial.js, Execution Time: 0.0772 seconds
File: kraken-1.1/json-stringify-tinderbox-data.js, Execution Time: 0.0129 seconds
File: kraken-1.1/json-stringify-tinderbox.js, Execution Time: 0.0800 seconds
File: kraken-1.1/stanford-crypto-aes-data.js, Execution Time: 0.0133 seconds
File: kraken-1.1/stanford-crypto-aes.js, Execution Time: 0.2977 seconds
File: kraken-1.1/stanford-crypto-ccm-data.js, Execution Time: 0.0136 seconds
File: kraken-1.1/stanford-crypto-ccm.js, Execution Time: 0.2351 seconds
File: kraken-1.1/stanford-crypto-pbkdf2-data.js, Execution Time: 0.0019 seconds
File: kraken-1.1/stanford-crypto-pbkdf2.js, Execution Time: 0.7815 seconds
File: kraken-1.1/stanford-crypto-sha256-iterative-data.js, Execution Time: 0.0015 seconds
File: kraken-1.1/stanford-crypto-sha256-iterative.js, Execution Time: 0.2267 seconds
Total (ms): 16291.4090
```