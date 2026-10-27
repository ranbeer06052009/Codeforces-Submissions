<h2><a href="https://codeforces.com/contest/2026/problem/B" target="_blank" rel="noopener noreferrer">2026B — Black Cells</a></h2>

| | |
|---|---|
| **Difficulty** | 1300 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 2026B](https://codeforces.com/contest/2026/problem/B) |

## Topics
`binary search` `brute force` `constructive algorithms` `greedy`

---

## Problem Statement

<div class="header"><div class="title">B. Black Cells</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given a strip divided into cells, numbered from left to right from $$$0$$$ to $$$10^{18}$$$. Initially, all cells are white.</p><p>You can perform the following operation: choose two <span class="tex-font-style-bf">white</span> cells $$$i$$$ and $$$j$$$, such that $$$i \ne j$$$ and $$$|i - j| \le k$$$, and paint them black.</p><p>A list $$$a$$$ is given. All cells from this list must be painted black. Additionally, <span class="tex-font-style-bf">at most one</span> cell that is not in this list can also be painted black. Your task is to determine the minimum value of $$$k$$$ for which this is possible.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$t$$$ ($$$1 \le t \le 500$$$) — the number of test cases.</p><p>The first line of each test case contains a single integer $$$n$$$ ($$$1 \le n \le 2000$$$).</p><p>The second line contains $$$n$$$ integers $$$a_1, a_2, \dots, a_n$$$ ($$$0  \lt  a_i  \lt  10^{18}$$$; $$$a_i  \lt  a_{i + 1}$$$).</p><p>Additional constraint on the input: the sum of $$$n$$$ across all test cases does not exceed $$$2000$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, print a single integer — the minimum value of $$$k$$$ for which it is possible to paint all the given cells black.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id007928115682261351" id="id0019289363600416898" class="input-output-copier">Copy</div></div><pre data-content="4
2
1 2
1
7
3
2 4 9
5
1 5 8 10 13
" id="id007928115682261351"><div class="test-example-line test-example-line-even test-example-line-0">4</div><div class="test-example-line test-example-line-odd test-example-line-1">2</div><div class="test-example-line test-example-line-odd test-example-line-1">1 2</div><div class="test-example-line test-example-line-even test-example-line-2">1</div><div class="test-example-line test-example-line-even test-example-line-2">7</div><div class="test-example-line test-example-line-odd test-example-line-3">3</div><div class="test-example-line test-example-line-odd test-example-line-3">2 4 9</div><div class="test-example-line test-example-line-even test-example-line-4">5</div><div class="test-example-line test-example-line-even test-example-line-4">1 5 8 10 13</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id009247093459982934" id="id003924679517436821" class="input-output-copier">Copy</div></div><pre id="id009247093459982934">1
1
2
3
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first example, with $$$k=1$$$, it is possible to paint the cells $$$(1, 2)$$$.</p><p>In the second example, with $$$k=1$$$, it is possible to paint the cells $$$(7, 8)$$$.</p><p>In the third example, with $$$k=2$$$, it is possible to paint the cells $$$(2, 4)$$$ and $$$(8, 9)$$$.</p><p>In the fourth example, with $$$k=3$$$, it is possible to paint the cells $$$(0, 1)$$$, $$$(5, 8)$$$ and $$$(10, 13)$$$.</p></div>