<h2><a href="https://codeforces.com/contest/1994/problem/D" target="_blank" rel="noopener noreferrer">1994D — Funny Game</a></h2>

| | |
|---|---|
| **Difficulty** | 1900 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1994D](https://codeforces.com/contest/1994/problem/D) |

## Topics
`constructive algorithms` `dsu` `graphs` `greedy` `math` `number theory` `trees`

---

## Problem Statement

<div class="header"><div class="title">D. Funny Game</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Vanya has a graph with $$$n$$$ vertices (numbered from $$$1$$$ to $$$n$$$) and an array $$$a$$$ of $$$n$$$ integers; initially, there are no edges in the graph. Vanya got bored, and to have fun, he decided to perform $$$n - 1$$$ operations.</p><p>Operation number $$$x$$$ (operations are numbered in order starting from $$$1$$$) is as follows:</p><ul> <li> Choose $$$2$$$ different numbers $$$1 \leq u,v \leq n$$$, such that $$$|a_u - a_v|$$$ is divisible by $$$x$$$. </li><li> Add an undirected edge between vertices $$$u$$$ and $$$v$$$ to the graph. </li></ul><p>Help Vanya get a connected$$$^{\text{∗}}$$$ graph using the $$$n - 1$$$ operations, or determine that it is impossible.</p><div class="statement-footnote"><p>$$$^{\text{∗}}$$$A graph is called connected if it is possible to reach any vertex from any other by moving along the edges.</p></div></div><div class="input-specification"><div class="section-title">Input</div><p>Each test consists of multiple test cases. The first line contains an integer $$$t$$$ ($$$1 \le t \le 10^{3}$$$) — the number of test cases. Then follows the description of the test cases.</p><p>The first line of each test case contains the number $$$n$$$ ($$$1 \leq n \leq 2000$$$) — the number of vertices in the graph.</p><p>The second line of each test case contains $$$n$$$ numbers $$$a_1, a_2, \cdots a_n$$$ ($$$1 \leq a_i \leq 10^9$$$).</p><p>It is guaranteed that the sum of $$$n$$$ over all test cases does not exceed $$$2000$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, if there is no solution, then output "<span class="tex-font-style-tt">No</span>" (without quotes). </p><p>Otherwise, output "<span class="tex-font-style-tt">Yes</span>" (without quotes), and then output $$$n - 1$$$ lines, where in the $$$i$$$-th line, output the numbers $$$u$$$ and $$$v$$$ that need to be chosen for operation $$$i$$$.</p><p>You can output each letter in any case (for example, the strings "<span class="tex-font-style-tt">yEs</span>", "<span class="tex-font-style-tt">yes</span>", "<span class="tex-font-style-tt">Yes</span>", and "<span class="tex-font-style-tt">YES</span>" will be recognized as a positive answer).</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id009343665042886615" id="id009712484601633296" class="input-output-copier">Copy</div></div><pre id="id009343665042886615"><div class="test-example-line test-example-line-even test-example-line-0">8</div><div class="test-example-line test-example-line-odd test-example-line-1">2</div><div class="test-example-line test-example-line-odd test-example-line-1">1 4</div><div class="test-example-line test-example-line-even test-example-line-2">4</div><div class="test-example-line test-example-line-even test-example-line-2">99 7 1 13</div><div class="test-example-line test-example-line-odd test-example-line-3">5</div><div class="test-example-line test-example-line-odd test-example-line-3">10 2 31 44 73</div><div class="test-example-line test-example-line-even test-example-line-4">5</div><div class="test-example-line test-example-line-even test-example-line-4">87 6 81 44 32</div><div class="test-example-line test-example-line-odd test-example-line-5">5</div><div class="test-example-line test-example-line-odd test-example-line-5">62 35 33 79 16</div><div class="test-example-line test-example-line-even test-example-line-6">5</div><div class="test-example-line test-example-line-even test-example-line-6">6 51 31 69 42</div><div class="test-example-line test-example-line-odd test-example-line-7">5</div><div class="test-example-line test-example-line-odd test-example-line-7">52 63 25 21 5</div><div class="test-example-line test-example-line-even test-example-line-8">12</div><div class="test-example-line test-example-line-even test-example-line-8">33 40 3 11 31 43 37 8 50 5 12 22</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id007442375164045757" id="id006586032163210949" class="input-output-copier">Copy</div></div><pre id="id007442375164045757">YES
2 1
YES
4 1
2 1
3 2
YES
5 1
4 1
3 1
2 1
YES
4 1
3 1
2 1
5 4
YES
3 1
5 1
2 1
4 2
YES
4 1
5 1
2 1
3 2
YES
2 1
5 2
3 1
4 3
YES
9 1
12 9
11 1
10 1
6 1
7 6
2 1
8 2
5 2
3 1
4 1
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>Let's consider the second test case. </p><ul> <li> First operation $$$(x = 1)$$$: we can connect vertices $$$4$$$ and $$$1$$$, since $$$|a_4 - a_1| = |13 - 99| = |-86| = 86$$$, and $$$86$$$ is divisible by $$$1$$$. </li></ul> <img class="tex-graphics" src="https://espresso.codeforces.com/24b0967a906dec08457b4ca26b1b9f94e4ae11d0.png" style="max-width: 100.0%;max-height: 100.0%;"> <ul> <li> Second operation $$$(x = 2)$$$: we can connect vertices $$$2$$$ and $$$1$$$, since $$$|a_2 - a_1| = |7 - 99| = |-92| = 92$$$, and $$$92$$$ is divisible by $$$2$$$. </li></ul> <img class="tex-graphics" src="https://espresso.codeforces.com/fdb54e80cd5428b2a0b745bfed10e1b4409a4a07.png" style="max-width: 100.0%;max-height: 100.0%;"> <ul> <li> Third operation $$$(x = 3)$$$: we can connect vertices $$$3$$$ and $$$2$$$, since $$$|a_3 - a_2| = |1 - 7| = |-6| = 6$$$, and $$$6$$$ is divisible by $$$3$$$. </li></ul> <img class="tex-graphics" src="https://espresso.codeforces.com/449331c248284a198b0c59042745856fef47c643.png" style="max-width: 100.0%;max-height: 100.0%;"> From the picture, it can be seen that a connected graph is obtained.</div>