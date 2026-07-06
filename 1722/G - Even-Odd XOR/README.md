<h2><a href="https://codeforces.com/contest/1722/problem/G" target="_blank" rel="noopener noreferrer">1722G — Even-Odd XOR</a></h2>

| | |
|---|---|
| **Difficulty** | 1500 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1722G](https://codeforces.com/contest/1722/problem/G) |

## Topics
`bitmasks` `constructive algorithms` `greedy`

---

## Problem Statement

<div class="header"><div class="title">G. Even-Odd XOR</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Given an integer $$$n$$$, find any array $$$a$$$ of $$$n$$$ <span class="tex-font-style-bf">distinct</span> nonnegative integers less than $$$2^{31}$$$ such that the <a href="https://en.wikipedia.org/wiki/Bitwise_operation#XOR">bitwise XOR</a> of the elements on odd indices equals the bitwise XOR of the elements on even indices.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line of the input contains an integer $$$t$$$ ($$$1 \leq t \leq 629$$$) — the number of test cases.</p><p>Then $$$t$$$ lines follow, each containing a single integer $$$n$$$ $$$(3 \leq n \leq 2\cdot10^5)$$$ — the length of the array.</p><p>It is guaranteed that the sum of $$$n$$$ over all test cases does not exceed $$$2\cdot 10^5$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output one line containing $$$n$$$ distinct integers that satisfy the conditions.</p><p>If there are multiple answers, you can output any of them.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id008726190875211354" id="id005241257463140461" class="input-output-copier">Copy</div></div><pre id="id008726190875211354">7
8
3
4
5
6
7
9
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0022142224846572311" id="id00050464432415240235" class="input-output-copier">Copy</div></div><pre id="id0022142224846572311">4 2 1 5 0 6 7 3
2 1 3
2 1 3 0
2 0 4 5 3
4 1 2 12 3 8
1 2 3 4 5 6 7
8 2 3 7 4 0 5 6 9</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case the XOR on odd indices is $$$4 \oplus 1 \oplus 0 \oplus 7 = 2$$$ and the XOR on even indices is $$$2 \oplus 5 \oplus 6 \oplus 3= 2$$$.</p></div>