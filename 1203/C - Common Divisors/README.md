<h2><a href="https://codeforces.com/contest/1203/problem/C" target="_blank" rel="noopener noreferrer">1203C — Common Divisors</a></h2>

| | |
|---|---|
| **Difficulty** | 1300 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1203C](https://codeforces.com/contest/1203/problem/C) |

## Topics
`implementation` `math`

---

## Problem Statement

<div class="header"><div class="title">C. Common Divisors</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given an array $$$a$$$ consisting of $$$n$$$ integers.</p><p>Your task is to say the number of such positive integers $$$x$$$ such that $$$x$$$ divides <span class="tex-font-style-bf">each</span> number from the array. In other words, you have to find the number of common divisors of all elements in the array.</p><p>For example, if the array $$$a$$$ will be $$$[2, 4, 6, 2, 10]$$$, then $$$1$$$ and $$$2$$$ divide each number from the array (so the answer for this test is $$$2$$$).</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line of the input contains one integer $$$n$$$ ($$$1 \le n \le 4 \cdot 10^5$$$) — the number of elements in $$$a$$$.</p><p>The second line of the input contains $$$n$$$ integers $$$a_1, a_2, \dots, a_n$$$ ($$$1 \le a_i \le 10^{12}$$$), where $$$a_i$$$ is the $$$i$$$-th element of $$$a$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print one integer — the number of such positive integers $$$x$$$ such that $$$x$$$ divides <span class="tex-font-style-bf">each</span> number from the given array (in other words, the answer is the number of common divisors of all elements in the array).</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id009885168080511716" id="id006415544204812961" class="input-output-copier">Copy</div></div><pre id="id009885168080511716">5
1 2 3 4 5
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id006566974516701198" id="id005284632920207933" class="input-output-copier">Copy</div></div><pre id="id006566974516701198">1
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0036854316163736234" id="id006928464935142448" class="input-output-copier">Copy</div></div><pre id="id0036854316163736234">6
6 90 12 18 30 18
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0018872837370313222" id="id0022887798362668987" class="input-output-copier">Copy</div></div><pre id="id0018872837370313222">4
</pre></div></div></div>