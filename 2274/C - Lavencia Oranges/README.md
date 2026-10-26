<h2><a href="https://codeforces.com/contest/2274/problem/C" target="_blank" rel="noopener noreferrer">2274C — Lavencia Oranges</a></h2>

| | |
|---|---|
| **Difficulty** | Unrated |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 2274C](https://codeforces.com/contest/2274/problem/C) |

## Topics
_No tags available_

---

## Problem Statement

<div class="header"><div class="title">C. Lavencia Oranges</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>René is leaving Lavencia after two long, cold years, with $$$n$$$ Lavencia oranges and $$$n$$$ bags for the oranges (initially empty), both numbered from $$$1$$$ to $$$n$$$. René packs the oranges according to an array $$$a$$$: orange $$$i$$$ goes into bag $$$a_i$$$.</p><p>Lavencia has a regulatory process for exports. Jacqueline carries it out: she chooses an integer $$$s$$$ and confiscates all bags holding exactly $$$s$$$ oranges, picking whichever $$$s$$$ takes the most oranges from René. The <span class="tex-font-style-it">cost</span> of $$$a$$$ is the number of oranges Jacqueline confiscates.</p><p>More formally, for a given array $$$a$$$, let $$$c_i$$$ be the number of elements that appear exactly $$$i$$$ times in $$$a$$$. The <span class="tex-font-style-it">cost</span> of $$$a$$$ is: $$$$$$ \max_{0 \le i \le n} i \cdot c_i $$$$$$</p><p>Given $$$n$$$, find an array $$$a$$$ that minimizes the cost.</p></div><div class="input-specification"><div class="section-title">Input</div><p>Each test contains multiple test cases. The first line contains the number of test cases $$$t$$$ ($$$1 \le t \le 10^4$$$). The description of the test cases follows.</p><p>The only line of each test case contains a single integer $$$n$$$ ($$$1 \le n \le 2 \cdot 10^5$$$).</p><p>It is guaranteed that the sum of $$$n$$$ over all test cases does not exceed $$$2 \cdot 10^5$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output two lines.</p><p>On the first line, output a single integer — the minimum possible cost.</p><p>On the second line, output $$$n$$$ integers $$$a_1, a_2, \ldots, a_n$$$ ($$$1 \le a_i \le n$$$) — any array that achieves this minimum.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id00057489239461150254" id="id001489479612307747" class="input-output-copier">Copy</div></div><pre data-content="3
4
5
8
" id="id00057489239461150254"><div class="test-example-line test-example-line-even test-example-line-0">3</div><div class="test-example-line test-example-line-odd test-example-line-1">4</div><div class="test-example-line test-example-line-even test-example-line-2">5</div><div class="test-example-line test-example-line-odd test-example-line-3">8</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id002851531018081934" id="id0021000712021429624" class="input-output-copier">Copy</div></div><pre id="id002851531018081934">2
1 2 3 3
3
1 1 2 2 2
3
4 2 1 5 1 3 1 3
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case, René places $$$1$$$, $$$1$$$, $$$2$$$, and $$$0$$$ oranges into the four bags, respectively. If Jacqueline picks size $$$1$$$, she confiscates bags $$$1$$$ and $$$2$$$, and René loses $$$2$$$ oranges. If she picks size $$$2$$$, she confiscates bag $$$3$$$, and he again loses $$$2$$$. Therefore, the cost is $$$2$$$. It can be proved that this is the minimum cost for this test case.</p><p>In the second test case, bag $$$1$$$ holds $$$2$$$ oranges, bag $$$2$$$ holds $$$3$$$, and the other bags are empty. Picking size $$$2$$$ costs René $$$2$$$ oranges, and picking size $$$3$$$ costs him $$$3$$$, so the cost is $$$3$$$. It can be proved that, in this case, $$$3$$$ is the minimum cost.</p></div>