<h2><a href="https://codeforces.com/contest/1154/problem/G" target="_blank" rel="noopener noreferrer">1154G — Minimum Possible LCM</a></h2>

| | |
|---|---|
| **Difficulty** | 2200 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1154G](https://codeforces.com/contest/1154/problem/G) |

## Topics
`brute force` `greedy` `math` `number theory`

---

## Problem Statement

<div class="header"><div class="title">G. Minimum Possible LCM</div><div class="time-limit"><div class="property-title">time limit per test</div>4 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>1024 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given an array $$$a$$$ consisting of $$$n$$$ integers $$$a_1, a_2, \dots, a_n$$$.</p><p>Your problem is to find such pair of indices $$$i, j$$$ ($$$1 \le i  \lt  j \le n$$$) that $$$lcm(a_i, a_j)$$$ is minimum possible.</p><p>$$$lcm(x, y)$$$ is the least common multiple of $$$x$$$ and $$$y$$$ (minimum positive number such that both $$$x$$$ and $$$y$$$ are divisors of this number).</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line of the input contains one integer $$$n$$$ ($$$2 \le n \le 10^6$$$) — the number of elements in $$$a$$$.</p><p>The second line of the input contains $$$n$$$ integers $$$a_1, a_2, \dots, a_n$$$ ($$$1 \le a_i \le 10^7$$$), where $$$a_i$$$ is the $$$i$$$-th element of $$$a$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print two integers $$$i$$$ and $$$j$$$ ($$$1 \le i  \lt  j \le n$$$) such that the value of $$$lcm(a_i, a_j)$$$ is minimum among all valid pairs $$$i, j$$$. If there are multiple answers, you can print any.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id006002553440304607" id="id000861109313580094" class="input-output-copier">Copy</div></div><pre id="id006002553440304607">5
2 4 8 3 6
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id006423850095361322" id="id006383072788554643" class="input-output-copier">Copy</div></div><pre id="id006423850095361322">1 2
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id002759103884381503" id="id0015027135054203" class="input-output-copier">Copy</div></div><pre id="id002759103884381503">5
5 2 11 3 7
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0021597474159201435" id="id005501271327807324" class="input-output-copier">Copy</div></div><pre id="id0021597474159201435">2 4
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id007631546357663147" id="id0039186701141679936" class="input-output-copier">Copy</div></div><pre id="id007631546357663147">6
2 5 10 1 10 2
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id008266491103737692" id="id0018889435933144916" class="input-output-copier">Copy</div></div><pre id="id008266491103737692">1 4
</pre></div></div></div>