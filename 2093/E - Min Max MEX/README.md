<h2><a href="https://codeforces.com/contest/2093/problem/E" target="_blank" rel="noopener noreferrer">2093E — Min Max MEX</a></h2>

| | |
|---|---|
| **Difficulty** | 1500 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 2093E](https://codeforces.com/contest/2093/problem/E) |

## Topics
`binary search` `brute force` `greedy`

---

## Problem Statement

<div class="header"><div class="title">E. Min Max MEX</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given an array $$$a$$$ of length $$$n$$$ and a number $$$k$$$.</p><p>A subarray is defined as a sequence of one or more consecutive elements of the array. You need to split the array $$$a$$$ into $$$k$$$ non-overlapping subarrays $$$b_1, b_2, \dots, b_k$$$ such that the union of these subarrays equals the entire array. Additionally, you need to maximize the value of $$$x$$$, which is equal to the minimum MEX$$$(b_i)$$$, for $$$i \in [1..k]$$$.</p><p>MEX$$$(v)$$$ denotes the smallest non-negative integer that is not present in the array $$$v$$$.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains an integer $$$t$$$ $$$(1\leq t\leq 10^4)$$$  — the number of test cases.</p><p>The first line of each test case contains two integers $$$n$$$, $$$k$$$ $$$(1\leq k \leq n \leq 2 \cdot 10^5)$$$  — the length of the array and the number of segments to split the array into.</p><p>The second line of each test case contains $$$n$$$ integers $$$a_i$$$ $$$(0\leq a_i\leq 10^9)$$$  — the elements of the array.</p><p>It is guaranteed that the sum of $$$n$$$ across all test cases does not exceed $$$2\cdot 10^5$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each query, output a single number  — the maximum value $$$x$$$ such that there exists a partition of the array $$$a$$$ into $$$k$$$ subarrays where the minimum MEX equals $$$x$$$.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id002181828060163501" id="id002780658625793796" class="input-output-copier">Copy</div></div><pre data-content="7
1 1
0
5 1
0 1 3 2 4
6 2
2 1 0 0 1 2
5 5
0 0 0 0 0
5 2
2 3 4 5 6
6 2
0 0 1 1 2 2
4 4
1 0 0 0
" id="id002181828060163501"><div class="test-example-line test-example-line-even test-example-line-0">7</div><div class="test-example-line test-example-line-odd test-example-line-1">1 1</div><div class="test-example-line test-example-line-odd test-example-line-1">0</div><div class="test-example-line test-example-line-even test-example-line-2">5 1</div><div class="test-example-line test-example-line-even test-example-line-2">0 1 3 2 4</div><div class="test-example-line test-example-line-odd test-example-line-3">6 2</div><div class="test-example-line test-example-line-odd test-example-line-3">2 1 0 0 1 2</div><div class="test-example-line test-example-line-even test-example-line-4">5 5</div><div class="test-example-line test-example-line-even test-example-line-4">0 0 0 0 0</div><div class="test-example-line test-example-line-odd test-example-line-5">5 2</div><div class="test-example-line test-example-line-odd test-example-line-5">2 3 4 5 6</div><div class="test-example-line test-example-line-even test-example-line-6">6 2</div><div class="test-example-line test-example-line-even test-example-line-6">0 0 1 1 2 2</div><div class="test-example-line test-example-line-odd test-example-line-7">4 4</div><div class="test-example-line test-example-line-odd test-example-line-7">1 0 0 0</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0009770220089894821" id="id0037117618288239995" class="input-output-copier">Copy</div></div><pre id="id0009770220089894821">1
5
3
1
0
1
0
</pre></div></div></div>