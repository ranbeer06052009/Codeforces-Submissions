<h2><a href="https://codeforces.com/contest/1730/problem/B" target="_blank" rel="noopener noreferrer">1730B — Meeting on the Line</a></h2>

| | |
|---|---|
| **Difficulty** | 1600 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1730B](https://codeforces.com/contest/1730/problem/B) |

## Topics
`binary search` `geometry` `greedy` `implementation` `math` `ternary search`

---

## Problem Statement

<div class="header"><div class="title">B. Meeting on the Line</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>$$$n$$$ people live on the coordinate line, the $$$i$$$-th one lives at the point $$$x_i$$$ ($$$1 \le i \le n$$$). They want to choose a position $$$x_0$$$ to meet. The $$$i$$$-th person will spend $$$|x_i - x_0|$$$ minutes to get to the meeting place. Also, the $$$i$$$-th person needs $$$t_i$$$ minutes to get dressed, so in total he or she needs $$$t_i + |x_i - x_0|$$$ minutes. </p><p>Here $$$|y|$$$ denotes the absolute value of $$$y$$$.</p><p>These people ask you to find a position $$$x_0$$$ that minimizes the time in which all $$$n$$$ people can gather at the meeting place. </p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$t$$$ ($$$1 \le t \le 10^3$$$) — the number of test cases. Then the test cases follow.</p><p>Each test case consists of three lines.</p><p>The first line contains a single integer $$$n$$$ ($$$1 \le n \le 10^5$$$) — the number of people. </p><p>The second line contains $$$n$$$ integers $$$x_1, x_2, \dots, x_n$$$ ($$$0 \le x_i \le 10^{8}$$$) — the positions of the people.</p><p>The third line contains $$$n$$$ integers $$$t_1, t_2, \dots, t_n$$$ ($$$0 \le t_i \le 10^{8}$$$), where $$$t_i$$$ is the time $$$i$$$-th person needs to get dressed.</p><p>It is guaranteed that the sum of $$$n$$$ over all test cases does not exceed $$$2 \cdot 10^5$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, print a single real number — the optimum position $$$x_0$$$. It can be shown that the optimal position $$$x_0$$$ is unique.</p><p>Your answer will be considered correct if its absolute or relative error does not exceed $$$10^{−6}$$$. Formally, let your answer be $$$a$$$, the jury's answer be $$$b$$$. Your answer will be considered correct if $$$\frac{|a−b|}{max(1,|b|)} \le 10^{−6}$$$.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id008303552065016909" id="id0038436307195496344" class="input-output-copier">Copy</div></div><pre data-content="7
1
0
3
2
3 1
0 0
2
1 4
0 0
3
1 2 3
0 0 0
3
1 2 3
4 1 2
3
3 3 3
5 3 3
6
5 4 7 2 10 4
3 2 5 1 4 6
" id="id008303552065016909"><div class="test-example-line test-example-line-even test-example-line-0">7</div><div class="test-example-line test-example-line-odd test-example-line-1">1</div><div class="test-example-line test-example-line-odd test-example-line-1">0</div><div class="test-example-line test-example-line-odd test-example-line-1">3</div><div class="test-example-line test-example-line-even test-example-line-2">2</div><div class="test-example-line test-example-line-even test-example-line-2">3 1</div><div class="test-example-line test-example-line-even test-example-line-2">0 0</div><div class="test-example-line test-example-line-odd test-example-line-3">2</div><div class="test-example-line test-example-line-odd test-example-line-3">1 4</div><div class="test-example-line test-example-line-odd test-example-line-3">0 0</div><div class="test-example-line test-example-line-even test-example-line-4">3</div><div class="test-example-line test-example-line-even test-example-line-4">1 2 3</div><div class="test-example-line test-example-line-even test-example-line-4">0 0 0</div><div class="test-example-line test-example-line-odd test-example-line-5">3</div><div class="test-example-line test-example-line-odd test-example-line-5">1 2 3</div><div class="test-example-line test-example-line-odd test-example-line-5">4 1 2</div><div class="test-example-line test-example-line-even test-example-line-6">3</div><div class="test-example-line test-example-line-even test-example-line-6">3 3 3</div><div class="test-example-line test-example-line-even test-example-line-6">5 3 3</div><div class="test-example-line test-example-line-odd test-example-line-7">6</div><div class="test-example-line test-example-line-odd test-example-line-7">5 4 7 2 10 4</div><div class="test-example-line test-example-line-odd test-example-line-7">3 2 5 1 4 6</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id007570901350465253" id="id007631522650461122" class="input-output-copier">Copy</div></div><pre id="id007570901350465253">0
2
2.5
2
1
3
6
</pre></div></div></div><div class="note"><div class="section-title">Note</div><ul> <li> In the $$$1$$$-st test case there is one person, so it is efficient to choose his or her position for the meeting place. Then he or she will get to it in $$$3$$$ minutes, that he or she need to get dressed. </li><li> In the $$$2$$$-nd test case there are $$$2$$$ people who don't need time to get dressed. Each of them needs one minute to get to position $$$2$$$. </li><li> In the $$$5$$$-th test case the $$$1$$$-st person needs $$$4$$$ minutes to get to position $$$1$$$ ($$$4$$$ minutes to get dressed and $$$0$$$ minutes on the way); the $$$2$$$-nd person needs $$$2$$$ minutes to get to position $$$1$$$ ($$$1$$$ minute to get dressed and $$$1$$$ minute on the way); the $$$3$$$-rd person needs $$$4$$$ minutes to get to position $$$1$$$ ($$$2$$$ minutes to get dressed and $$$2$$$ minutes on the way). </li></ul></div>