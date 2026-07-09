<h2><a href="https://codeforces.com/contest/1667/problem/A" target="_blank" rel="noopener noreferrer">1667A — Make it Increasing</a></h2>

| | |
|---|---|
| **Difficulty** | 1300 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1667A](https://codeforces.com/contest/1667/problem/A) |

## Topics
`brute force` `greedy` `math`

---

## Problem Statement

<div class="header"><div class="title">A. Make it Increasing</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given an array $$$a$$$ consisting of $$$n$$$ positive integers, and an array $$$b$$$, with length $$$n$$$. Initially $$$b_i=0$$$ for each $$$1 \leq i \leq n$$$.</p><p>In one move you can choose an integer $$$i$$$ ($$$1 \leq i \leq n$$$), and add $$$a_i$$$ to $$$b_i$$$ or subtract $$$a_i$$$ from $$$b_i$$$. What is the minimum number of moves needed to make $$$b$$$ increasing (that is, every element is strictly greater than every element before it)?</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$n$$$ ($$$2 \leq n \leq 5000$$$).</p><p>The second line contains $$$n$$$ integers, $$$a_1$$$, $$$a_2$$$, ..., $$$a_n$$$ ($$$1 \leq a_i \leq 10^9$$$) — the elements of the array $$$a$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print a single integer, the minimum number of moves to make $$$b$$$ increasing.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id001432379045823189" id="id0037592722658020805" class="input-output-copier">Copy</div></div><pre id="id001432379045823189">5
1 2 3 4 5
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id007403847565733616" id="id005265460431133628" class="input-output-copier">Copy</div></div><pre id="id007403847565733616">4
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0035237009052949597" id="id008205257658495241" class="input-output-copier">Copy</div></div><pre id="id0035237009052949597">7
1 2 1 2 1 2 1
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id006386480574553388" id="id005977801985125547" class="input-output-copier">Copy</div></div><pre id="id006386480574553388">10
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0013757719946652658" id="id0025246307559158887" class="input-output-copier">Copy</div></div><pre id="id0013757719946652658">8
1 8 2 7 3 6 4 5
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0026348487764094075" id="id005716187253215885" class="input-output-copier">Copy</div></div><pre id="id0026348487764094075">16
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>Example $$$1$$$: you can subtract $$$a_1$$$ from $$$b_1$$$, and add $$$a_3$$$, $$$a_4$$$, and $$$a_5$$$ to $$$b_3$$$, $$$b_4$$$, and $$$b_5$$$ respectively. The final array will be [$$$-1$$$, $$$0$$$, $$$3$$$, $$$4$$$, $$$5$$$] after $$$4$$$ moves.</p><p>Example $$$2$$$: you can reach [$$$-3$$$, $$$-2$$$, $$$-1$$$, $$$0$$$, $$$1$$$, $$$2$$$, $$$3$$$] in $$$10$$$ moves.</p></div>