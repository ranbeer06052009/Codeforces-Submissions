<h2><a href="https://codeforces.com/contest/1285/problem/C" target="_blank" rel="noopener noreferrer">1285C — Fadi and LCM</a></h2>

| | |
|---|---|
| **Difficulty** | 1400 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1285C](https://codeforces.com/contest/1285/problem/C) |

## Topics
`brute force` `math` `number theory`

---

## Problem Statement

<div class="header"><div class="title">C. Fadi and LCM</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Today, Osama gave Fadi an integer $$$X$$$, and Fadi was wondering about the minimum possible value of $$$max(a, b)$$$ such that $$$LCM(a, b)$$$ equals $$$X$$$. Both $$$a$$$ and $$$b$$$ should be positive integers.</p><p>$$$LCM(a, b)$$$ is the smallest positive integer that is divisible by both $$$a$$$ and $$$b$$$. For example, $$$LCM(6, 8) = 24$$$, $$$LCM(4, 12) = 12$$$, $$$LCM(2, 3) = 6$$$.</p><p>Of course, Fadi immediately knew the answer. Can you be just like Fadi and find any such pair?</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first and only line contains an integer $$$X$$$ ($$$1 \le X \le 10^{12}$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print two positive integers, $$$a$$$ and $$$b$$$, such that the value of $$$max(a, b)$$$ is minimum possible and $$$LCM(a, b)$$$ equals $$$X$$$. If there are several possible such pairs, you can print any.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0041542829008296756" id="id0020919220044091913" class="input-output-copier">Copy</div></div><pre id="id0041542829008296756">2
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id00621351648320218" id="id007743978718025016" class="input-output-copier">Copy</div></div><pre id="id00621351648320218">1 2
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0024706039061477814" id="id0029984067676636195" class="input-output-copier">Copy</div></div><pre id="id0024706039061477814">6
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id003148979150267275" id="id008689680156900252" class="input-output-copier">Copy</div></div><pre id="id003148979150267275">2 3
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0013929463713703405" id="id003186020645141264" class="input-output-copier">Copy</div></div><pre id="id0013929463713703405">4
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0020858446092794858" id="id002014502649494716" class="input-output-copier">Copy</div></div><pre id="id0020858446092794858">1 4
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id007704798667810453" id="id007960758087675418" class="input-output-copier">Copy</div></div><pre id="id007704798667810453">1
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id006077244699031042" id="id006012809566129679" class="input-output-copier">Copy</div></div><pre id="id006077244699031042">1 1
</pre></div></div></div>