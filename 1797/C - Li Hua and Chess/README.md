<h2><a href="https://codeforces.com/contest/1797/problem/C" target="_blank" rel="noopener noreferrer">1797C — Li Hua and Chess</a></h2>

| | |
|---|---|
| **Difficulty** | 1600 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1797C](https://codeforces.com/contest/1797/problem/C) |

## Topics
`constructive algorithms` `greedy` `interactive`

---

## Problem Statement

<div class="header"><div class="title">C. Li Hua and Chess</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p><span class="tex-font-style-bf">This is an interactive problem.</span></p><p>Li Ming and Li Hua are playing a game. Li Hua has a chessboard of size $$$n\times m$$$. Denote $$$(r, c)$$$ ($$$1\le r\le n, 1\le c\le m$$$) as the cell on the $$$r$$$-th row from the top and on the $$$c$$$-th column from the left. Li Ming put a king on the chessboard and Li Hua needs to guess its position.</p><p>Li Hua can ask Li Ming <span class="tex-font-style-bf">no more than $$$3$$$</span> questions. In each question, he can choose a cell and ask the minimum steps needed to move the king to the chosen cell. Each question is independent, which means the king doesn't actually move.</p><p>A king can move from $$$(x,y)$$$ to $$$(x',y')$$$ if and only if $$$\max\{|x-x'|,|y-y'|\}=1$$$ (shown in the following picture).</p><center> <table class="tex-tabular bordertable"><tbody><tr><td class="tex-tabular-text-align-center"><img class="tex-graphics" src="https://espresso.codeforces.com/db6e742ef66d91cdba2e4092e4e775d51db8b66f.png" style="max-width: 100.0%;max-height: 100.0%;"></td></tr></tbody></table> </center><p>The position of the king is chosen <span class="tex-font-style-bf">before</span> the interaction.</p><p>Suppose you were Li Hua, please solve this problem.</p></div><div><div class="section-title">Interaction</div><p>The first line contains the number of test cases $$$t$$$ ($$$1 \le t \le 10^3$$$). </p><p>The first line of each test case contains two integers $$$n,m$$$ ($$$1\le n,m\le 10^9$$$) — the size of the chessboard, and then the interaction begins.</p><p>To ask a question, print "<span class="tex-font-style-tt">?</span> $$$r$$$ $$$c$$$" (without quotes, $$$1 \leq r \leq n, 1 \leq c \leq m$$$). Then you should input the response from standard input — the minimum steps the king needs to move to the chosen cell.</p><p>If your program has asked an invalid question or has run out of questions, the interactor will terminate immediately and your program will get a verdict <span class="tex-font-style-tt">Wrong answer</span>.</p><p>To give the final answer, print "<span class="tex-font-style-tt">!</span> $$$r$$$ $$$c$$$" (without the quotes, $$$(r,c)$$$ is the king's initial coordinate). Note that giving this answer is not counted towards the limit of $$$3$$$ questions.</p><p>After asking a question do not forget to output the end of line and flush the output. Otherwise, you will get <span class="tex-font-style-tt">Idleness limit exceeded</span>. To do this, use:</p><ul> <li> <span class="tex-font-style-tt">fflush(stdout)</span> or <span class="tex-font-style-tt">cout.flush()</span> in C++; </li><li> <span class="tex-font-style-tt">System.out.flush()</span> in Java; </li><li> <span class="tex-font-style-tt">flush(output)</span> in Pascal; </li><li> <span class="tex-font-style-tt">stdout.flush()</span> in Python; </li><li> see the documentation for other languages. </li></ul><p><span class="tex-font-style-bf">Hacks</span></p><p>To hack, use the following format.</p><p>The first line should contain a single integer $$$t$$$ ($$$1 \le t \le 10^3$$$).</p><p>The first and only line of each test case should contain four integers $$$n,m,r,c$$$ ($$$1\le r\le n\le 10^9,1\le c\le m\le 10^9$$$).</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id00953218656065693" id="id0037579721550015155" class="input-output-copier">Copy</div></div><pre id="id00953218656065693">2
3 4

1

2

5 3

3

1

2</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id00028438109838284542" id="id0019658918576799012" class="input-output-copier">Copy</div></div><pre id="id00028438109838284542">

? 2 3

? 2 4

! 2 2

? 2 2

? 5 2

? 5 3

! 5 1</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In test case 1, the king is at $$$(2,2)$$$. It takes $$$1$$$ step to move to $$$(2,3)$$$ and $$$2$$$ steps to move to $$$(2,4)$$$.</p><center> <table class="tex-tabular bordertable"><tbody><tr><td class="tex-tabular-text-align-center"><img class="tex-graphics" src="https://espresso.codeforces.com/98a2f1747e4752b816d0f9bd30f9367417de27aa.png" style="max-width: 100.0%;max-height: 100.0%;"></td></tr></tbody></table> </center><p>Note that the questions may not seem sensible. They are just a sample of questions you may ask.</p></div>