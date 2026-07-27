<h2><a href="https://codeforces.com/contest/1748/problem/D" target="_blank" rel="noopener noreferrer">1748D — ConstructOR </a></h2>

| | |
|---|---|
| **Difficulty** | 2100 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1748D](https://codeforces.com/contest/1748/problem/D) |

## Topics
`bitmasks` `chinese remainder theorem` `combinatorics` `constructive algorithms` `math` `number theory`

---

## Problem Statement

<div class="header"><div class="title">D. ConstructOR </div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given three integers $$$a$$$, $$$b$$$, and $$$d$$$. Your task is to find any integer $$$x$$$ which satisfies all of the following conditions, or determine that no such integers exist:</p><ul> <li> $$$0 \le x \lt 2^{60}$$$; </li><li> $$$a|x$$$ is divisible by $$$d$$$; </li><li> $$$b|x$$$ is divisible by $$$d$$$. </li></ul><p>Here, $$$|$$$ denotes the <a href="https://en.wikipedia.org/wiki/Bitwise_operation#OR">bitwise OR operation</a>.</p></div><div class="input-specification"><div class="section-title">Input</div><p>Each test contains multiple test cases. The first line of input contains one integer $$$t$$$ ($$$1 \le t \le 10^4$$$) — the number of test cases. </p><p>Each test case consists of one line, containing three integers $$$a$$$, $$$b$$$, and $$$d$$$ ($$$1 \le a,b,d \lt 2^{30}$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case print one integer. If there exists an integer $$$x$$$ which satisfies all of the conditions from the statement, print $$$x$$$. Otherwise, print $$$-1$$$.</p><p>If there are multiple solutions, you may print <span class="tex-font-style-bf">any</span> of them. </p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id005938762779282111" id="id004800026464406848" class="input-output-copier">Copy</div></div><pre id="id005938762779282111"><div class="test-example-line test-example-line-even test-example-line-0">8</div><div class="test-example-line test-example-line-odd test-example-line-1">12 39 5</div><div class="test-example-line test-example-line-even test-example-line-2">6 8 14</div><div class="test-example-line test-example-line-odd test-example-line-3">100 200 200</div><div class="test-example-line test-example-line-even test-example-line-4">3 4 6</div><div class="test-example-line test-example-line-odd test-example-line-5">2 2 2</div><div class="test-example-line test-example-line-even test-example-line-6">18 27 3</div><div class="test-example-line test-example-line-odd test-example-line-7">420 666 69</div><div class="test-example-line test-example-line-even test-example-line-8">987654321 123456789 999999999</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id005256056932741157" id="id00087685926937898" class="input-output-copier">Copy</div></div><pre id="id005256056932741157">18
14
-1
-1
0
11
25599
184470016815529983</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case, $$$x=18$$$ is one of the possible solutions, since $$$39|18=55$$$ and $$$12|18=30$$$, both of which are multiples of $$$d=5$$$.</p><p>In the second test case, $$$x=14$$$ is one of the possible solutions, since $$$8|14=6|14=14$$$, which is a multiple of $$$d=14$$$.</p><p>In the third and fourth test cases, we can show that there are no solutions.</p></div>