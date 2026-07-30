<h2><a href="https://codeforces.com/contest/1420/problem/D" target="_blank" rel="noopener noreferrer">1420D — Rescue Nibel!</a></h2>

| | |
|---|---|
| **Difficulty** | 1800 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1420D](https://codeforces.com/contest/1420/problem/D) |

## Topics
`combinatorics` `data structures` `sortings`

---

## Problem Statement

<div class="header"><div class="title">D. Rescue Nibel!</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Ori and Sein have overcome many difficult challenges. They finally lit the Shrouded Lantern and found Gumon Seal, the key to the Forlorn Ruins. When they tried to open the door to the ruins... nothing happened.</p><p>Ori was very surprised, but Sein gave the explanation quickly: clever Gumon decided to make an additional defence for the door.</p><p>There are $$$n$$$ lamps with Spirit Tree's light. Sein knows the time of turning on and off for the $$$i$$$-th lamp — $$$l_i$$$ and $$$r_i$$$ respectively. To open the door you have to choose $$$k$$$ lamps in such a way that there will be a moment of time when they all will be turned on.</p><p>While Sein decides which of the $$$k$$$ lamps to pick, Ori is interested: how many ways there are to pick such $$$k$$$ lamps that the door will open? It may happen that Sein may be wrong and there are no such $$$k$$$ lamps. The answer might be large, so print it modulo $$$998\,244\,353$$$.</p></div><div class="input-specification"><div class="section-title">Input</div><p>First line contains two integers $$$n$$$ and $$$k$$$ ($$$1 \le n \le 3 \cdot 10^5$$$, $$$1 \le k \le n$$$) — total number of lamps and the number of lamps that must be turned on simultaneously.</p><p>Next $$$n$$$ lines contain two integers $$$l_i$$$ ans $$$r_i$$$ ($$$1 \le l_i \le r_i \le 10^9$$$) — period of time when $$$i$$$-th lamp is turned on.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print one integer — the answer to the task modulo $$$998\,244\,353$$$.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0016128189225086753" id="id005720076488818493" class="input-output-copier">Copy</div></div><pre id="id0016128189225086753">7 3
1 7
3 8
4 5
6 7
1 3
5 10
8 9
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id009831758772353546" id="id004755995994898956" class="input-output-copier">Copy</div></div><pre id="id009831758772353546">9</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id004124603479697099" id="id0027636005532514185" class="input-output-copier">Copy</div></div><pre id="id004124603479697099">3 1
1 1
2 2
3 3
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id005427709622959479" id="id0040832868001884093" class="input-output-copier">Copy</div></div><pre id="id005427709622959479">3</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id009665716807876579" id="id00336971380321076" class="input-output-copier">Copy</div></div><pre id="id009665716807876579">3 2
1 1
2 2
3 3
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0029752847992353537" id="id006456565351758035" class="input-output-copier">Copy</div></div><pre id="id0029752847992353537">0</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0013500992911261622" id="id009326559816577585" class="input-output-copier">Copy</div></div><pre id="id0013500992911261622">3 3
1 3
2 3
3 3
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0041243065266574863" id="id009097366839680792" class="input-output-copier">Copy</div></div><pre id="id0041243065266574863">1</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0032357796056597876" id="id007607295645939565" class="input-output-copier">Copy</div></div><pre id="id0032357796056597876">5 2
1 3
2 4
3 5
4 6
5 7
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id002900394090745798" id="id008905807312697667" class="input-output-copier">Copy</div></div><pre id="id002900394090745798">7</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In first test case there are nine sets of $$$k$$$ lamps: $$$(1, 2, 3)$$$, $$$(1, 2, 4)$$$, $$$(1, 2, 5)$$$, $$$(1, 2, 6)$$$, $$$(1, 3, 6)$$$, $$$(1, 4, 6)$$$, $$$(2, 3, 6)$$$, $$$(2, 4, 6)$$$, $$$(2, 6, 7)$$$.</p><p>In second test case $$$k=1$$$, so the answer is 3.</p><p>In third test case there are no such pairs of lamps.</p><p>In forth test case all lamps are turned on in a time $$$3$$$, so the answer is 1.</p><p>In fifth test case there are seven sets of $$$k$$$ lamps: $$$(1, 2)$$$, $$$(1, 3)$$$, $$$(2, 3)$$$, $$$(2, 4)$$$, $$$(3, 4)$$$, $$$(3, 5)$$$, $$$(4, 5)$$$.</p></div>