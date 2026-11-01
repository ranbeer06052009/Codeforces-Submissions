<h2><a href="https://codeforces.com/contest/1931/problem/F" target="_blank" rel="noopener noreferrer">1931F — Chat Screenshots</a></h2>

| | |
|---|---|
| **Difficulty** | 1700 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1931F](https://codeforces.com/contest/1931/problem/F) |

## Topics
`combinatorics` `dfs and similar` `graphs`

---

## Problem Statement

<div class="header"><div class="title">F. Chat Screenshots</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>There are $$$n$$$ people in the programming contest chat. Chat participants are ordered by activity, but each person sees himself at the top of the list.</p><p>For example, there are $$$4$$$ participants in the chat, and their order is $$$[2, 3, 1, 4]$$$. Then </p><ul> <li> $$$1$$$-st user sees the order $$$[1, 2, 3, 4]$$$. </li><li> $$$2$$$-nd user sees the order $$$[2, 3, 1, 4]$$$. </li><li> $$$3$$$-rd user sees the order $$$[3, 2, 1, 4]$$$. </li><li> $$$4$$$-th user sees the order $$$[4, 2, 3, 1]$$$. </li></ul><p>$$$k$$$ people posted screenshots in the chat, which show the order of participants shown to this user. The screenshots were taken within a short period of time, and the order of participants has not changed. </p><p>Your task is to determine whether there is a certain order that all screenshots correspond to.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$t$$$ ($$$1 \le t \le 10^4$$$) — the number of input test cases. The descriptions of test cases follow.</p><p>The first line of the description of each test case contains two integers $$$n$$$ and $$$k$$$ ($$$1 \le k \le n \le 2 \cdot 10^5, n \cdot k \le 2 \cdot 10^5$$$) — the number of chat participants and the number of participants who posted screenshots.</p><p>The following $$$k$$$ lines contain descriptions of screenshots posted by the participants.</p><p>The $$$i$$$-th row contains $$$n$$$ integers $$$a_{ij}$$$ each ($$$1 \le a_{ij} \le n$$$, all $$$a_{ij}$$$ are different) — the order of participants shown to the participant $$$a_{i0}$$$, where $$$a_{i0}$$$ — the author of the screenshot. You can show that in the screenshot description it will always be at the top of the list.</p><p>It is guaranteed that the sum of $$$n \cdot k$$$ for all test cases does not exceed $$$2 \cdot 10^5$$$. It is also guaranteed that all the authors of the screenshots are different.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Output $$$t$$$ lines, each of which is the answer to the corresponding test case. As an answer, output "<span class="tex-font-style-tt">YES</span>" if there exists at least one order of participants, under which all $$$k$$$ screenshots could have been obtained. Otherwise, output "<span class="tex-font-style-tt">NO</span>".</p><p>You can output the answer in any case (upper or lower). For example, the strings "<span class="tex-font-style-tt">yEs</span>", "<span class="tex-font-style-tt">yes</span>", "<span class="tex-font-style-tt">Yes</span>", and "<span class="tex-font-style-tt">YES</span>" will be recognized as positive responses.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0025663597447584163" id="id0009042744374158307" class="input-output-copier">Copy</div></div><pre data-content="10
5 1
1 2 3 4 5
4 4
1 2 3 4
2 3 1 4
3 2 1 4
4 2 3 1
6 2
1 3 5 2 4 6
6 3 5 2 1 4
3 3
1 2 3
2 3 1
3 2 1
10 2
1 2 3 4 5 6 7 8 9 10
10 9 8 7 6 5 4 3 2 1
1 1
1
5 2
1 2 3 5 4
2 1 3 5 4
3 3
3 1 2
2 3 1
1 3 2
5 4
3 5 1 4 2
2 5 1 4 3
1 5 4 3 2
5 1 4 3 2
3 3
1 3 2
2 1 3
3 2 1
" id="id0025663597447584163"><div class="test-example-line test-example-line-even test-example-line-0">10</div><div class="test-example-line test-example-line-odd test-example-line-1">5 1</div><div class="test-example-line test-example-line-odd test-example-line-1">1 2 3 4 5</div><div class="test-example-line test-example-line-even test-example-line-2">4 4</div><div class="test-example-line test-example-line-even test-example-line-2">1 2 3 4</div><div class="test-example-line test-example-line-even test-example-line-2">2 3 1 4</div><div class="test-example-line test-example-line-even test-example-line-2">3 2 1 4</div><div class="test-example-line test-example-line-even test-example-line-2">4 2 3 1</div><div class="test-example-line test-example-line-odd test-example-line-3">6 2</div><div class="test-example-line test-example-line-odd test-example-line-3">1 3 5 2 4 6</div><div class="test-example-line test-example-line-odd test-example-line-3">6 3 5 2 1 4</div><div class="test-example-line test-example-line-even test-example-line-4">3 3</div><div class="test-example-line test-example-line-even test-example-line-4">1 2 3</div><div class="test-example-line test-example-line-even test-example-line-4">2 3 1</div><div class="test-example-line test-example-line-even test-example-line-4">3 2 1</div><div class="test-example-line test-example-line-odd test-example-line-5">10 2</div><div class="test-example-line test-example-line-odd test-example-line-5">1 2 3 4 5 6 7 8 9 10</div><div class="test-example-line test-example-line-odd test-example-line-5">10 9 8 7 6 5 4 3 2 1</div><div class="test-example-line test-example-line-even test-example-line-6">1 1</div><div class="test-example-line test-example-line-even test-example-line-6">1</div><div class="test-example-line test-example-line-odd test-example-line-7">5 2</div><div class="test-example-line test-example-line-odd test-example-line-7">1 2 3 5 4</div><div class="test-example-line test-example-line-odd test-example-line-7">2 1 3 5 4</div><div class="test-example-line test-example-line-even test-example-line-8">3 3</div><div class="test-example-line test-example-line-even test-example-line-8">3 1 2</div><div class="test-example-line test-example-line-even test-example-line-8">2 3 1</div><div class="test-example-line test-example-line-even test-example-line-8">1 3 2</div><div class="test-example-line test-example-line-odd test-example-line-9">5 4</div><div class="test-example-line test-example-line-odd test-example-line-9">3 5 1 4 2</div><div class="test-example-line test-example-line-odd test-example-line-9">2 5 1 4 3</div><div class="test-example-line test-example-line-odd test-example-line-9">1 5 4 3 2</div><div class="test-example-line test-example-line-odd test-example-line-9">5 1 4 3 2</div><div class="test-example-line test-example-line-even test-example-line-10">3 3</div><div class="test-example-line test-example-line-even test-example-line-10">1 3 2</div><div class="test-example-line test-example-line-even test-example-line-10">2 1 3</div><div class="test-example-line test-example-line-even test-example-line-10">3 2 1</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0004986812609618563" id="id005875508584404734" class="input-output-copier">Copy</div></div><pre id="id0004986812609618563">YES
YES
YES
YES
NO
YES
YES
YES
YES
NO
</pre></div></div></div>