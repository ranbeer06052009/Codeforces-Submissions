<h2><a href="https://codeforces.com/contest/1477/problem/A" target="_blank" rel="noopener noreferrer">1477A — Nezzar and Board</a></h2>

| | |
|---|---|
| **Difficulty** | 1800 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1477A](https://codeforces.com/contest/1477/problem/A) |

## Topics
`constructive algorithms` `math` `number theory`

---

## Problem Statement

<div class="header"><div class="title">A. Nezzar and Board</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>512 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>$$$n$$$ <span class="tex-font-style-bf">distinct</span> integers $$$x_1,x_2,\ldots,x_n$$$ are written on the board. Nezzar can perform the following operation multiple times.</p><ul> <li> Select two integers $$$x,y$$$ (not necessarily distinct) on the board, and write down $$$2x-y$$$. Note that you don't remove selected numbers. </li></ul><p>Now, Nezzar wonders if it is possible to have his favorite number $$$k$$$ on the board after applying above operation multiple times.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$t$$$ ($$$1 \le t \le 10^5$$$) — the number of test cases. </p><p>The first line of each test case contains two integers $$$n,k$$$ ($$$2 \le n \le 2 \cdot 10^5$$$, $$$-10^{18} \le k \le 10^{18}$$$).</p><p>The second line of each test case contains $$$n$$$ distinct integers $$$x_1,x_2,\ldots,x_n$$$ ($$$-10^{18} \le x_i \le 10^{18}$$$).</p><p>It is guaranteed that the sum of $$$n$$$ for all test cases does not exceed $$$2 \cdot 10^5$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, print "<span class="tex-font-style-tt">YES</span>" on a single line if it is possible to have $$$k$$$ on the board. Otherwise, print "<span class="tex-font-style-tt">NO</span>".</p><p>You can print each letter in any case (upper or lower).</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id00841407813703358" id="id007443785915819394" class="input-output-copier">Copy</div></div><pre id="id00841407813703358">6
2 1
1 2
3 0
2 3 7
2 -1
31415926 27182818
2 1000000000000000000
1 1000000000000000000
2 -1000000000000000000
-1000000000000000000 123
6 80
-5 -20 13 -14 -2 -11
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id005661280394139165" id="id005352496242354016" class="input-output-copier">Copy</div></div><pre id="id005661280394139165">YES
YES
NO
YES
YES
NO
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case, the number $$$1$$$ is already on the board.</p><p>In the second test case, Nezzar could perform the following operations to write down $$$k=0$$$ on the board: </p><ul> <li> Select $$$x=3$$$ and $$$y=2$$$ and write down $$$4$$$ on the board. </li><li> Select $$$x=4$$$ and $$$y=7$$$ and write down $$$1$$$ on the board. </li><li> Select $$$x=1$$$ and $$$y=2$$$ and write down $$$0$$$ on the board. </li></ul><p>In the third test case, it is impossible to have the number $$$k = -1$$$ on the board.</p></div>