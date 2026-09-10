<h2><a href="https://codeforces.com/contest/1996/problem/D" target="_blank" rel="noopener noreferrer">1996D — Fun</a></h2>

| | |
|---|---|
| **Difficulty** | 1500 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1996D](https://codeforces.com/contest/1996/problem/D) |

## Topics
`binary search` `brute force` `combinatorics` `math` `number theory`

---

## Problem Statement

<div class="header"><div class="title">D. Fun</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><div class="epigraph"><div class="epigraph-text"><span class="tex-font-style-it">Counting is Fun!</span></div><div class="epigraph-source">— satyam343</div></div><p>Given two integers $$$n$$$ and $$$x$$$, find the number of triplets ($$$a,b,c$$$) of <span class="tex-font-style-bf">positive integers</span> such that $$$ab + ac + bc \le n$$$ and $$$a + b + c \le x$$$. </p><p>Note that order matters (e.g. ($$$1, 1, 2$$$) and ($$$1, 2, 1$$$) are treated as different) and $$$a$$$, $$$b$$$, $$$c$$$ must be strictly greater than $$$0$$$.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$t$$$ ($$$1 \leq t \leq 10^4$$$)  — the number of test cases.</p><p>Each test case contains two integers $$$n$$$ and $$$x$$$ ($$$1 \leq n,x \leq 10^6$$$).</p><p>It is guaranteed that the sum of $$$n$$$ over all test cases does not exceed $$$10^6$$$ and that the sum of $$$x$$$ over all test cases does not exceed $$$10^6$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Output a single integer — the number of triplets ($$$a,b,c$$$) of positive integers such that $$$ab + ac + bc \le n$$$ and $$$a + b + c \le x$$$.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0013942002036171108" id="id002645530738949008" class="input-output-copier">Copy</div></div><pre id="id0013942002036171108"><div class="test-example-line test-example-line-even test-example-line-0">4</div><div class="test-example-line test-example-line-odd test-example-line-1">7 4</div><div class="test-example-line test-example-line-even test-example-line-2">10 5</div><div class="test-example-line test-example-line-odd test-example-line-3">7 1000</div><div class="test-example-line test-example-line-even test-example-line-4">900000 400000</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id007581508629294624" id="id005178866237348004" class="input-output-copier">Copy</div></div><pre id="id007581508629294624">4
10
7
1768016938
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case, the triplets are ($$$1, 1, 1$$$), ($$$1, 1, 2$$$), ($$$1, 2, 1$$$), and ($$$2, 1, 1$$$).</p><p>In the second test case, the triplets are ($$$1, 1, 1$$$), ($$$1, 1, 2$$$), ($$$1, 1, 3$$$), ($$$1, 2, 1$$$), ($$$1, 2, 2$$$), ($$$1, 3, 1$$$), ($$$2, 1, 1$$$), ($$$2, 1, 2$$$), ($$$2, 2, 1$$$), and ($$$3, 1, 1$$$).</p></div>