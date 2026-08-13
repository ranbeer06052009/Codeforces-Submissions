<h2><a href="https://codeforces.com/contest/1312/problem/C" target="_blank" rel="noopener noreferrer">1312C — Adding Powers</a></h2>

| | |
|---|---|
| **Difficulty** | 1400 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1312C](https://codeforces.com/contest/1312/problem/C) |

## Topics
`bitmasks` `greedy` `implementation` `math` `number theory` `ternary search`

---

## Problem Statement

<div class="header"><div class="title">C. Adding Powers</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Suppose you are performing the following algorithm. There is an array $$$v_1, v_2, \dots, v_n$$$ filled with zeroes at start. The following operation is applied to the array several times — at $$$i$$$-th step ($$$0$$$-indexed) you can: </p><ul> <li> either choose position $$$pos$$$ ($$$1 \le pos \le n$$$) and increase $$$v_{pos}$$$ by $$$k^i$$$; </li><li> or not choose any position and skip this step. </li></ul><p>You can choose how the algorithm would behave on each step and when to stop it. The question is: can you make array $$$v$$$ equal to the given array $$$a$$$ ($$$v_j = a_j$$$ for each $$$j$$$) after some step?</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains one integer $$$T$$$ ($$$1 \le T \le 1000$$$) — the number of test cases. Next $$$2T$$$ lines contain test cases — two lines per test case.</p><p>The first line of each test case contains two integers $$$n$$$ and $$$k$$$ ($$$1 \le n \le 30$$$, $$$2 \le k \le 100$$$) — the size of arrays $$$v$$$ and $$$a$$$ and value $$$k$$$ used in the algorithm.</p><p>The second line contains $$$n$$$ integers $$$a_1, a_2, \dots, a_n$$$ ($$$0 \le a_i \le 10^{16}$$$) — the array you'd like to achieve.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case print <span class="tex-font-style-tt">YES</span> (case insensitive) if you can achieve the array $$$a$$$ after some step or <span class="tex-font-style-tt">NO</span> (case insensitive) otherwise.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id007218828548339548" id="id003355838201695923" class="input-output-copier">Copy</div></div><pre id="id007218828548339548">5
4 100
0 0 0 0
1 2
1
3 4
1 4 1
3 2
0 1 3
3 9
0 59049 810
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id007759134603182376" id="id005757460723040546" class="input-output-copier">Copy</div></div><pre id="id007759134603182376">YES
YES
NO
NO
YES
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case, you can stop the algorithm before the $$$0$$$-th step, or don't choose any position several times and stop the algorithm.</p><p>In the second test case, you can add $$$k^0$$$ to $$$v_1$$$ and stop the algorithm.</p><p>In the third test case, you can't make two $$$1$$$ in the array $$$v$$$.</p><p>In the fifth test case, you can skip $$$9^0$$$ and $$$9^1$$$, then add $$$9^2$$$ and $$$9^3$$$ to $$$v_3$$$, skip $$$9^4$$$ and finally, add $$$9^5$$$ to $$$v_2$$$.</p></div>