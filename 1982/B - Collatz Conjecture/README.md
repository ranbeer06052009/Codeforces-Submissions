<h2><a href="https://codeforces.com/contest/1982/problem/B" target="_blank" rel="noopener noreferrer">1982B — Collatz Conjecture</a></h2>

| | |
|---|---|
| **Difficulty** | 1200 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1982B](https://codeforces.com/contest/1982/problem/B) |

## Topics
`brute force` `implementation` `math` `number theory`

---

## Problem Statement

<div class="header"><div class="title">B. Collatz Conjecture</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Recently, the first-year student Maxim learned about the Collatz conjecture, but he didn't pay much attention during the lecture, so he believes that the following process is mentioned in the conjecture:</p><p>There is a variable $$$x$$$ and a constant $$$y$$$. The following operation is performed $$$k$$$ times: </p><ul> <li> increase $$$x$$$ by $$$1$$$, then </li><li> while the number $$$x$$$ is divisible by $$$y$$$, divide it by $$$y$$$. </li></ul> Note that both of these actions are performed sequentially within one operation.<p>For example, if the number $$$x = 16$$$, $$$y = 3$$$, and $$$k = 2$$$, then after one operation $$$x$$$ becomes $$$17$$$, and after another operation $$$x$$$ becomes $$$2$$$, because after adding one, $$$x = 18$$$ is divisible by $$$3$$$ twice.</p><p>Given the initial values of $$$x$$$, $$$y$$$, and $$$k$$$, Maxim wants to know what is the final value of $$$x$$$.</p></div><div class="input-specification"><div class="section-title">Input</div><p>Each test consists of multiple test cases. The first line contains an integer $$$t$$$ ($$$1 \le t \le 10^{4}$$$) — the number of test cases. Then follows the description of the test cases.</p><p>The only line of each test case contains three integers $$$x$$$, $$$y$$$, and $$$k$$$ ($$$1 \le x, k \le 10^{9}$$$, $$$2 \le y \le 10^{9}$$$) — the initial variable, constant and the number of operations.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output a single integer — the number obtained after applying $$$k$$$ operations.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id007898639185458441" id="id007376986805719273" class="input-output-copier">Copy</div></div><pre id="id007898639185458441"><div class="test-example-line test-example-line-even test-example-line-0">13</div><div class="test-example-line test-example-line-odd test-example-line-1">1 3 1</div><div class="test-example-line test-example-line-even test-example-line-2">2 3 1</div><div class="test-example-line test-example-line-odd test-example-line-3">24 5 5</div><div class="test-example-line test-example-line-even test-example-line-4">16 3 2</div><div class="test-example-line test-example-line-odd test-example-line-5">2 2 1</div><div class="test-example-line test-example-line-even test-example-line-6">1337 18 1</div><div class="test-example-line test-example-line-odd test-example-line-7">1 2 144133</div><div class="test-example-line test-example-line-even test-example-line-8">12345678 3 10</div><div class="test-example-line test-example-line-odd test-example-line-9">998244353 2 998244353</div><div class="test-example-line test-example-line-even test-example-line-10">998244353 123456789 998244352</div><div class="test-example-line test-example-line-odd test-example-line-11">998244354 998241111 998244352</div><div class="test-example-line test-example-line-even test-example-line-12">998244355 2 9982443</div><div class="test-example-line test-example-line-odd test-example-line-13">1000000000 1000000000 1000000000</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id006716359073607268" id="id00005987213722416507" class="input-output-copier">Copy</div></div><pre id="id006716359073607268">2
1
1
2
3
1338
1
16936
1
21180097
6486
1
2
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case, there is only one operation applied to $$$x = 1$$$, resulting in $$$x$$$ becoming $$$2$$$.</p><p>In the second test case, for $$$x = 2$$$, within one operation, one is added to $$$x$$$ and it's divided by $$$y = 3$$$, resulting in $$$x$$$ becoming $$$1$$$.</p><p>In the third test case, $$$x$$$ changes as follows:</p><ul> <li> After the first operation, $$$x = 1$$$, because $$$24 + 1 = 25$$$ and $$$25$$$ is divisible by $$$y = 5$$$ twice within one operation. </li><li> After the second operation, $$$x = 2$$$. </li><li> After the third operation, $$$x = 3$$$. </li><li> After the fourth operation, $$$x = 4$$$. </li><li> After the fifth operation, $$$x = 1$$$. </li></ul></div>