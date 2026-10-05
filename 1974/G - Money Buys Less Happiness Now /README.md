<h2><a href="https://codeforces.com/contest/1974/problem/G" target="_blank" rel="noopener noreferrer">1974G — Money Buys Less Happiness Now </a></h2>

| | |
|---|---|
| **Difficulty** | 2000 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1974G](https://codeforces.com/contest/1974/problem/G) |

## Topics
`data structures` `greedy` `sortings`

---

## Problem Statement

<div class="header"><div class="title">G. Money Buys Less Happiness Now </div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p><span class="tex-font-style-bf">You can never buy enough happiness, so here we go again! In this version, you can only buy $$$h_i = 1$$$ unit of happiness each month, but the number of months is hugely increased. We are in the realm of quantum happiness and time dilation.</span></p><p>Being a physicist, Charlie likes to plan his life in simple and precise terms. </p><p>For the next $$$m$$$ months, starting with no money, Charlie will work hard and earn $$$x$$$ pounds per month. For the $$$i$$$-th month $$$(1 \le i \le m)$$$, there'll be a single opportunity of paying cost $$$c_i$$$ pounds to obtain one unit of happiness. You cannot buy more than one unit each month.</p><p>Borrowing is not allowed. Money earned in the $$$i$$$-th month can only be spent in a later $$$j$$$-th month ($$$j \gt i$$$).</p><p>Since physicists don't code, help Charlie find the maximum reachable units of happiness.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line of the input contains $$$t$$$ ($$$1 \leq t \leq 10^4$$$) — the number of test cases. </p><p>The first line of each test case contains two integers, $$$m$$$ and $$$x$$$ ($$$1 \le m \le 2 \cdot 10^5$$$, $$$1 \le x \le 10^3$$$) — the total number of months and the monthly salary. </p><p>The second line of each test case contains $$$m$$$ integers $$$c_1, c_2, \dots, c_m$$$ ($$$1 \leq c_i \leq 10^3$$$) — the cost of one unit of happiness for each month.</p><p>It is guaranteed that sum of $$$m$$$ over all test cases does not exceed $$$2 \cdot 10^5$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output one integer — the maximal amount of happiness Charlie can get.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0003321219156749533" id="id00501270841027069" class="input-output-copier">Copy</div></div><pre id="id0003321219156749533"><div class="test-example-line test-example-line-even test-example-line-0">6</div><div class="test-example-line test-example-line-odd test-example-line-1">3 3</div><div class="test-example-line test-example-line-odd test-example-line-1">2 2 2</div><div class="test-example-line test-example-line-even test-example-line-2">6 5</div><div class="test-example-line test-example-line-even test-example-line-2">2 2 8 2 6 8</div><div class="test-example-line test-example-line-odd test-example-line-3">6 4</div><div class="test-example-line test-example-line-odd test-example-line-3">4 10 3 8 6 10</div><div class="test-example-line test-example-line-even test-example-line-4">2 1</div><div class="test-example-line test-example-line-even test-example-line-4">1 1</div><div class="test-example-line test-example-line-odd test-example-line-5">4 1</div><div class="test-example-line test-example-line-odd test-example-line-5">4 1 3 1</div><div class="test-example-line test-example-line-even test-example-line-6">4 2</div><div class="test-example-line test-example-line-even test-example-line-6">1 3 4 3</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0041450069320622074" id="id0049798021748493837" class="input-output-copier">Copy</div></div><pre id="id0041450069320622074">2
4
3
1
2
1
</pre></div></div></div>