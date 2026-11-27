<h2><a href="https://codeforces.com/contest/2292/problem/D" target="_blank" rel="noopener noreferrer">2292D — Unexpected Precipitation</a></h2>

| | |
|---|---|
| **Difficulty** | Unrated |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 2292D](https://codeforces.com/contest/2292/problem/D) |

## Topics
_No tags available_

---

## Problem Statement

<div class="header"><div class="title">D. Unexpected Precipitation</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>While experimenting with the clouds, Sunny and Aubrey accidentally summoned heavy rain and ran to take shelter inside the "Othermart" shopping mall. Along its long main corridor, there are $$$n$$$ pairs of shops. In the $$$i$$$-th pair, the shop on the left sells a product for $$$x_i$$$ coins, and the shop on the right sells a product for $$$y_i$$$ coins.</p><p>The friends visit the pairs of shops in order from $$$1$$$ to $$$n$$$. Initially, Sunny is on the left side of the corridor, and Aubrey is on the right side.</p><p>At each pair of shops, <span class="tex-font-style-bf">the participant currently on the left</span> chooses one of the following actions: </p><ul> <li> <span class="tex-font-style-bf">Buy.</span> Both participants buy a product: the participant on the left pays $$$x_i$$$ coins, and the participant on the right pays $$$y_i$$$ coins. They stay on their current sides for the next pair of shops. </li><li> <span class="tex-font-style-bf">Skip.</span> Neither participant buys anything. They swap sides before proceeding to the next pair of shops. </li></ul><p>There is no limit on the amount of money either participant can spend. Both participants know all the prices in advance.</p><p>After all $$$n$$$ pairs of shops have been visited, let $$$d=s_1-s_2$$$, where $$$s_1$$$ is the total amount spent by Sunny and $$$s_2$$$ is the total amount spent by Aubrey. Sunny wants to maximize $$$d$$$, while Aubrey wants to minimize it.</p><p>The participant who spends more wins. Determine the outcome if both participants play optimally: Sunny wins if $$$d \gt 0$$$, Aubrey wins if $$$d \lt 0$$$, and the game is a draw if $$$d=0$$$.</p></div><div class="input-specification"><div class="section-title">Input</div><p>Each test consists of multiple test cases. The first line contains an integer $$$t$$$ ($$$1 \le t \le 10^4$$$) — the number of test cases. The description of the test cases follows.</p><p>The first line of each test case contains an integer $$$n$$$ ($$$1 \le n \le 2 \cdot 10^5$$$) — the number of pairs of shops.</p><p>The second line contains $$$n$$$ integers $$$x_1, x_2, \dots, x_n$$$ ($$$1 \le x_i \le 10^9$$$) — the prices at the shops on the left side.</p><p>The third line contains $$$n$$$ integers $$$y_1, y_2, \dots, y_n$$$ ($$$1 \le y_i \le 10^9$$$) — the prices at the shops on the right side.</p><p>The sum of $$$n$$$ over all test cases does not exceed $$$2 \cdot 10^5$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, print the answer: <span class="tex-font-style-tt">Sunny</span> (if $$$d  \gt  0$$$), <span class="tex-font-style-tt">Aubrey</span> (if $$$d  \lt  0$$$), or <span class="tex-font-style-tt">Draw</span> (if $$$d = 0$$$). Use the capitalization shown above.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id003258416444509168" id="id00323393453007351" class="input-output-copier">Copy</div></div><pre data-content="8
4
4 3 1 4
3 5 3 3
1
10
5
2
5 10
5 1
2
10 10
10 10
2
2 3
4 1
2
1 3
4 2
4
2 2 2 2
5 2 3 4
4
2 1 1 2
1 5 2 1
" id="id003258416444509168"><div class="test-example-line test-example-line-even test-example-line-0">8</div><div class="test-example-line test-example-line-odd test-example-line-1">4</div><div class="test-example-line test-example-line-odd test-example-line-1">4 3 1 4</div><div class="test-example-line test-example-line-odd test-example-line-1">3 5 3 3</div><div class="test-example-line test-example-line-even test-example-line-2">1</div><div class="test-example-line test-example-line-even test-example-line-2">10</div><div class="test-example-line test-example-line-even test-example-line-2">5</div><div class="test-example-line test-example-line-odd test-example-line-3">2</div><div class="test-example-line test-example-line-odd test-example-line-3">5 10</div><div class="test-example-line test-example-line-odd test-example-line-3">5 1</div><div class="test-example-line test-example-line-even test-example-line-4">2</div><div class="test-example-line test-example-line-even test-example-line-4">10 10</div><div class="test-example-line test-example-line-even test-example-line-4">10 10</div><div class="test-example-line test-example-line-odd test-example-line-5">2</div><div class="test-example-line test-example-line-odd test-example-line-5">2 3</div><div class="test-example-line test-example-line-odd test-example-line-5">4 1</div><div class="test-example-line test-example-line-even test-example-line-6">2</div><div class="test-example-line test-example-line-even test-example-line-6">1 3</div><div class="test-example-line test-example-line-even test-example-line-6">4 2</div><div class="test-example-line test-example-line-odd test-example-line-7">4</div><div class="test-example-line test-example-line-odd test-example-line-7">2 2 2 2</div><div class="test-example-line test-example-line-odd test-example-line-7">5 2 3 4</div><div class="test-example-line test-example-line-even test-example-line-8">4</div><div class="test-example-line test-example-line-even test-example-line-8">2 1 1 2</div><div class="test-example-line test-example-line-even test-example-line-8">1 5 2 1</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id008267148991476428" id="id002853697385014451" class="input-output-copier">Copy</div></div><pre data-content="Sunny
Sunny
Sunny
Draw
Draw
Aubrey
Draw
Sunny
" id="id008267148991476428"><div class="test-example-line test-example-line-odd test-example-line-1">Sunny</div><div class="test-example-line test-example-line-even test-example-line-2">Sunny</div><div class="test-example-line test-example-line-odd test-example-line-3">Sunny</div><div class="test-example-line test-example-line-even test-example-line-4">Draw</div><div class="test-example-line test-example-line-odd test-example-line-5">Draw</div><div class="test-example-line test-example-line-even test-example-line-6">Aubrey</div><div class="test-example-line test-example-line-odd test-example-line-7">Draw</div><div class="test-example-line test-example-line-even test-example-line-8">Sunny</div></pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case Sunny can buy at the first pair and skip the second. The difference is now $$$1$$$. If Aubrey skips the third pair, Sunny buys at the fourth and the final difference is $$$2$$$. If Aubrey buys at the third, the difference becomes $$$3$$$, and if she buys at the fourth, the difference falls to $$$2$$$. Sunny can therefore guarantee a win.</p><p>In the sixth test case, buying immediately gives Sunny a difference of $$$1-4=-3$$$. He can recover only $$$3-2=1$$$ at the second pair. If he skips the first pair, Aubrey buys at the second and the difference becomes $$$2-3=-1$$$. Aubrey wins either way.</p></div>