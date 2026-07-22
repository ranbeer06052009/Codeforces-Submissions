<h2><a href="https://codeforces.com/contest/1717/problem/E" target="_blank" rel="noopener noreferrer">1717E — Madoka and The Best University</a></h2>

| | |
|---|---|
| **Difficulty** | 2200 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1717E](https://codeforces.com/contest/1717/problem/E) |

## Topics
`math` `number theory`

---

## Problem Statement

<div class="header"><div class="title">E. Madoka and The Best University</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Madoka wants to enter to "<span class="tex-font-style-it">Novosibirsk State University</span>", but in the entrance exam she came across a very difficult task:</p><p>Given an integer $$$n$$$, it is required to calculate $$$\sum{\operatorname{lcm}(c, \gcd(a, b))}$$$, for all triples of positive integers $$$(a, b, c)$$$, where $$$a + b + c = n$$$.</p><p>In this problem $$$\gcd(x, y)$$$ denotes the <a href="https://en.wikipedia.org/wiki/Greatest_common_divisor">greatest common divisor</a> of $$$x$$$ and $$$y$$$, and $$$\operatorname{lcm}(x, y)$$$ denotes the <a href="https://en.wikipedia.org/wiki/Least_common_multiple">least common multiple</a> of $$$x$$$ and $$$y$$$.</p><p>Solve this problem for Madoka and help her to enter to the best university!</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first and the only line contains a single integer $$$n$$$ ($$$3 \le n \le 10^5$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print exactly one interger — $$$\sum{\operatorname{lcm}(c, \gcd(a, b))}$$$. Since the answer can be very large, then output it modulo $$$10^9 + 7$$$.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id003505811331697414" id="id008462663649554698" class="input-output-copier">Copy</div></div><pre id="id003505811331697414">3
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0019370293035172115" id="id00419591715349653" class="input-output-copier">Copy</div></div><pre id="id0019370293035172115">1
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0017706630340707674" id="id002088210818141204" class="input-output-copier">Copy</div></div><pre id="id0017706630340707674">5
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0008129258341779155" id="id005348544698623495" class="input-output-copier">Copy</div></div><pre id="id0008129258341779155">11
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0006427752707341927" id="id00012926945782675281" class="input-output-copier">Copy</div></div><pre id="id0006427752707341927">69228
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id009049037897475366" id="id009337223588203505" class="input-output-copier">Copy</div></div><pre id="id009049037897475366">778304278
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first example, there is only one suitable triple $$$(1, 1, 1)$$$. So the answer is $$$\operatorname{lcm}(1, \gcd(1, 1)) = \operatorname{lcm}(1, 1) = 1$$$.</p><p>In the second example, $$$\operatorname{lcm}(1, \gcd(3, 1)) + \operatorname{lcm}(1, \gcd(2, 2)) + \operatorname{lcm}(1, \gcd(1, 3)) + \operatorname{lcm}(2, \gcd(2, 1)) + \operatorname{lcm}(2, \gcd(1, 2)) + \operatorname{lcm}(3, \gcd(1, 1)) = \operatorname{lcm}(1, 1) + \operatorname{lcm}(1, 2) + \operatorname{lcm}(1, 1) + \operatorname{lcm}(2, 1) + \operatorname{lcm}(2, 1) + \operatorname{lcm}(3, 1) = 1 + 2 + 1 + 2 + 2 + 3 = 11$$$</p></div>