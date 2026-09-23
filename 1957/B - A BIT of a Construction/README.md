<h2><a href="https://codeforces.com/contest/1957/problem/B" target="_blank" rel="noopener noreferrer">1957B — A BIT of a Construction</a></h2>

| | |
|---|---|
| **Difficulty** | 1100 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1957B](https://codeforces.com/contest/1957/problem/B) |

## Topics
`bitmasks` `constructive algorithms` `greedy` `implementation`

---

## Problem Statement

<div class="header"><div class="title">B. A BIT of a Construction</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Given integers $$$n$$$ and $$$k$$$, construct a sequence of $$$n$$$ non-negative (i.e. $$$\geq 0$$$) integers $$$a_1, a_2, \ldots, a_n$$$ such that </p><ol> <li> $$$\sum\limits_{i = 1}^n a_i = k$$$ </li><li> The <span class="tex-font-style-bf">number</span> of $$$1$$$s in the binary representation of $$$a_1 | a_2 | \ldots | a_n$$$ is maximized, where $$$|$$$ denotes the <a href="https://en.wikipedia.org/wiki/Bitwise_operation#OR">bitwise OR operation</a>. </li></ol></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$t$$$ ($$$1 \leq t \leq 10^4$$$) — the number of test cases.</p><p>The only line of each test case contains two integers $$$n$$$ and $$$k$$$ ($$$1 \leq n \leq 2 \cdot 10^5$$$, $$$1 \leq k \leq 10^9$$$) — the number of non-negative integers to be printed and the sum respectively.</p><p>It is guaranteed that the sum of $$$n$$$ over all test cases does not exceed $$$2 \cdot 10^5$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output a sequence $$$a_1, a_2, \ldots, a_n$$$ on a new line that satisfies the conditions given above.</p><p>If there are multiple solutions, print any of them.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id007036922220682512" id="id002747543491385761" class="input-output-copier">Copy</div></div><pre id="id007036922220682512"><div class="test-example-line test-example-line-even test-example-line-0">4</div><div class="test-example-line test-example-line-odd test-example-line-1">1 5</div><div class="test-example-line test-example-line-even test-example-line-2">2 3</div><div class="test-example-line test-example-line-odd test-example-line-3">2 5</div><div class="test-example-line test-example-line-even test-example-line-4">6 51</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id003996442711822922" id="id005936137530993275" class="input-output-copier">Copy</div></div><pre id="id003996442711822922">5
1 2
5 0
3 1 1 32 2 12</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case, we have to print exactly one integer, hence we can only output $$$5$$$ as the answer.</p><p>In the second test case, we output $$$1, 2$$$ which sum up to $$$3$$$, and $$$1 | 2 = (11)_2$$$ has two $$$1$$$s in its binary representation, which is the maximum we can achieve in these constraints.</p><p>In the fourth test case, we output $$$3, 1, 1, 32, 2, 12$$$ which sum up to $$$51$$$, and $$$3 | 1 | 1 | 32 | 2 | 12 = (101\,111)_2$$$ has five $$$1$$$s in its binary representation, which is the maximum we can achieve in these constraints.</p></div>