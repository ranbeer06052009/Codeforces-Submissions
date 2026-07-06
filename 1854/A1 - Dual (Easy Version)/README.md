<h2><a href="https://codeforces.com/contest/1854/problem/A1" target="_blank" rel="noopener noreferrer">1854A1 — Dual (Easy Version)</a></h2>

| | |
|---|---|
| **Difficulty** | 1400 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1854A1](https://codeforces.com/contest/1854/problem/A1) |

## Topics
`constructive algorithms` `math`

---

## Problem Statement

<div class="header"><div class="title">A1. Dual (Easy Version)</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><div class="epigraph"><div class="epigraph-text"><span class="tex-font-style-it"><a href="https://soundcloud.com/popskyy/popskyy-tiasu-dual">Popskyy & tiasu - Dual</a></span></div><div class="epigraph-source">⠀</div></div><p><span class="tex-font-style-bf">The only difference between the two versions of this problem is the constraint on the maximum number of operations. You can make hacks only if all versions of the problem are solved.</span></p><p>You are given an array $$$a_1, a_2,\dots, a_n$$$ of integers (positive, negative or $$$0$$$). You can perform multiple operations on the array (possibly $$$0$$$ operations).</p><p>In one operation, you choose $$$i, j$$$ ($$$1 \leq i, j \leq n$$$, they can be equal) and set $$$a_i := a_i + a_j$$$ (i.e., add $$$a_j$$$ to $$$a_i$$$).</p><p>Make the array non-decreasing (i.e., $$$a_i \leq a_{i+1}$$$ for $$$1 \leq i \leq n-1$$$) in at most $$$50$$$ operations. You do not need to minimize the number of operations.</p></div><div class="input-specification"><div class="section-title">Input</div><p>Each test contains multiple test cases. The first line contains the number of test cases $$$t$$$ ($$$1 \le t \le 500$$$). The description of the test cases follows.</p><p>The first line contains a single integer $$$n$$$ ($$$1 \le n \le 20$$$) — the length of the array.</p><p>The second line contains $$$n$$$ integers $$$a_1, a_2, \ldots, a_n$$$ ($$$-20 \le a_i \le 20$$$) — the array before performing the operations.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output your operations in the following format.</p><p>The first line should contain an integer $$$k$$$ ($$$0 \le k \le 50$$$) — the number of operations.</p><p>The next $$$k$$$ lines represent the $$$k$$$ operations in order. Each of these $$$k$$$ lines should contain two integers $$$i$$$ and $$$j$$$ ($$$1 \leq i, j \leq n$$$) — the corresponding operation consists in adding $$$a_j$$$ to $$$a_i$$$.</p><p>After all the operations, the array $$$a_1, a_2,\dots, a_n$$$ must be non-decreasing.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id008577768220818212" id="id0046768907006143823" class="input-output-copier">Copy</div></div><pre id="id008577768220818212"><div class="test-example-line test-example-line-even test-example-line-0">10</div><div class="test-example-line test-example-line-odd test-example-line-1">2</div><div class="test-example-line test-example-line-odd test-example-line-1">2 1</div><div class="test-example-line test-example-line-even test-example-line-2">4</div><div class="test-example-line test-example-line-even test-example-line-2">1 2 -10 3</div><div class="test-example-line test-example-line-odd test-example-line-3">5</div><div class="test-example-line test-example-line-odd test-example-line-3">2 1 1 1 1</div><div class="test-example-line test-example-line-even test-example-line-4">8</div><div class="test-example-line test-example-line-even test-example-line-4">0 0 0 0 0 0 0 0</div><div class="test-example-line test-example-line-odd test-example-line-5">5</div><div class="test-example-line test-example-line-odd test-example-line-5">1 2 -4 3 -10</div><div class="test-example-line test-example-line-even test-example-line-6">10</div><div class="test-example-line test-example-line-even test-example-line-6">11 12 13 14 15 -15 -16 -17 -18 -19</div><div class="test-example-line test-example-line-odd test-example-line-7">7</div><div class="test-example-line test-example-line-odd test-example-line-7">1 9 3 -4 -3 -2 -1</div><div class="test-example-line test-example-line-even test-example-line-8">3</div><div class="test-example-line test-example-line-even test-example-line-8">10 9 8</div><div class="test-example-line test-example-line-odd test-example-line-9">20</div><div class="test-example-line test-example-line-odd test-example-line-9">1 -14 2 -10 6 -5 10 -13 10 7 -14 19 -5 19 1 18 -16 -7 12 8</div><div class="test-example-line test-example-line-even test-example-line-10">20</div><div class="test-example-line test-example-line-even test-example-line-10">-15 -17 -13 8 14 -13 10 -4 11 -4 -16 -6 15 -4 -2 7 -9 5 -5 17</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id009776787318434919" id="id002705897285333493" class="input-output-copier">Copy</div></div><pre id="id009776787318434919">1
2 1
3
4 4
4 4
3 4
4
2 1
3 1
4 1
5 1
0
7
3 4
3 4
5 4
5 4
5 4
5 4
5 4
15
6 1
6 1
6 1
7 2
7 2
7 2
8 3
8 3
8 3
9 4
9 4
9 4
10 5
10 5
10 5
8
3 4
3 4
2 4
2 4
2 4
2 4
1 4
1 4
3
2 1
3 1
3 1
31
14 1
18 7
13 11
15 11
6 4
5 17
19 6
19 12
10 5
11 12
1 17
15 19
16 10
14 2
16 11
20 7
7 6
9 5
3 6
6 14
17 18
18 14
12 3
17 16
8 18
13 16
9 8
14 8
16 2
11 8
12 7
31
5 12
19 13
9 1
5 17
18 19
6 16
15 8
6 9
15 14
7 10
19 7
17 20
14 4
15 20
4 3
1 8
16 12
16 15
5 6
12 10
11 15
20 3
20 19
13 14
11 14
18 10
7 3
12 17
4 7
13 2
11 13
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case, by adding $$$a_1 = 2$$$ to $$$a_2$$$, we get the array $$$[2, 3]$$$ which is non-decreasing.</p><p>In the second test case, the array changes as: </p><ul> <li> $$$[1, 2, -10, 3]$$$ </li><li> $$$[1, 2, -10, 6]$$$ </li><li> $$$[1, 2, -10, 12]$$$ </li><li> $$$[1, 2, 2, 12]$$$ </li></ul><p>In the third test case, the final array is $$$[2, 3, 3, 3, 3]$$$.</p></div>