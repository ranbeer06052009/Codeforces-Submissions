<h2><a href="https://codeforces.com/contest/2292/problem/C" target="_blank" rel="noopener noreferrer">2292C — Finding Shapes in the Clouds</a></h2>

| | |
|---|---|
| **Difficulty** | Unrated |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 2292C](https://codeforces.com/contest/2292/problem/C) |

## Topics
_No tags available_

---

## Problem Statement

<div class="header"><div class="title">C. Finding Shapes in the Clouds</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>After eating and settling down on a soft blanket by the lake, Sunny and Aubrey began gazing at the sky. The friends noticed an unusual long band of $$$n$$$ clouds, where each cloud is either fluffy and white (represented as "0") or thin and dark (represented as "1"). Let $$$s$$$ be the current string of cloud types.</p><p>While watching the sky, Aubrey noticed an unusual phenomenon: when gusts of wind blow through the cloud band, a "cloud swirl" occurs.</p><p>In one cloud swirl, the friends can choose two clouds at positions $$$i$$$ and $$$j$$$ ($$$1 \le i  \lt  j \le |s|$$$) that have the same type ($$$s_i = s_j$$$). As a result of this wind: </p><ol> <li> Both selected clouds $$$s_i$$$ and $$$s_j$$$ dissipate and completely disappear from the band. </li><li> All clouds located strictly between them (at positions from $$$i+1$$$ to $$$j-1$$$) invert their type due to turbulence: a white cloud ("0") becomes dark ("1"), and a dark cloud ("1") becomes white ("0"). </li></ol> The remaining clouds keep their order and are renumbered starting from one.<p>Can the friends make the cloud band empty by applying this operation?</p></div><div class="input-specification"><div class="section-title">Input</div><p>Each test consists of multiple test cases. The first line contains an integer $$$t$$$ ($$$1 \le t \le 10^4$$$) — the number of test cases. The description of the test cases follows.</p><p>The first line of each test case contains a single integer $$$n$$$ ($$$1 \le n \le 2 \cdot 10^5$$$) — the initial length of the cloud band.</p><p>The second line contains a binary string $$$s$$$ of length $$$n$$$ consisting only of characters '<span class="tex-font-style-tt">0</span>' and '<span class="tex-font-style-tt">1</span>'.</p><p>The sum of $$$n$$$ over all test cases does not exceed $$$2 \cdot 10^5$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, print <span class="tex-font-style-tt">YES</span> if the sky can be completely cleared of clouds, and <span class="tex-font-style-tt">NO</span> otherwise.</p><p>You can output each letter in any case (for example, <span class="tex-font-style-tt">YES</span>, <span class="tex-font-style-tt">Yes</span>, <span class="tex-font-style-tt">yes</span> will be recognized as a positive answer).</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id006286976284651238" id="id006338742099714955" class="input-output-copier">Copy</div></div><pre data-content="7
4
0000
4
0101
6
011010
2
01
3
000
4
1000
6
010001
" id="id006286976284651238"><div class="test-example-line test-example-line-even test-example-line-0">7</div><div class="test-example-line test-example-line-odd test-example-line-1">4</div><div class="test-example-line test-example-line-odd test-example-line-1">0000</div><div class="test-example-line test-example-line-even test-example-line-2">4</div><div class="test-example-line test-example-line-even test-example-line-2">0101</div><div class="test-example-line test-example-line-odd test-example-line-3">6</div><div class="test-example-line test-example-line-odd test-example-line-3">011010</div><div class="test-example-line test-example-line-even test-example-line-4">2</div><div class="test-example-line test-example-line-even test-example-line-4">01</div><div class="test-example-line test-example-line-odd test-example-line-5">3</div><div class="test-example-line test-example-line-odd test-example-line-5">000</div><div class="test-example-line test-example-line-even test-example-line-6">4</div><div class="test-example-line test-example-line-even test-example-line-6">1000</div><div class="test-example-line test-example-line-odd test-example-line-7">6</div><div class="test-example-line test-example-line-odd test-example-line-7">010001</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id00301473322236008" id="id00932929749268946" class="input-output-copier">Copy</div></div><pre data-content="YES
NO
YES
NO
NO
YES
YES
" id="id00301473322236008"><div class="test-example-line test-example-line-odd test-example-line-1">YES</div><div class="test-example-line test-example-line-even test-example-line-2">NO</div><div class="test-example-line test-example-line-odd test-example-line-3">YES</div><div class="test-example-line test-example-line-even test-example-line-4">NO</div><div class="test-example-line test-example-line-odd test-example-line-5">NO</div><div class="test-example-line test-example-line-even test-example-line-6">YES</div><div class="test-example-line test-example-line-odd test-example-line-7">YES</div></pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the third test case, remove the clouds at positions $$$1$$$ and $$$4$$$ in <span class="tex-font-style-tt">011010</span>. After the inversion the band reads <span class="tex-font-style-tt">0010</span>. Removing positions $$$2$$$ and $$$4$$$ now leaves <span class="tex-font-style-tt">00</span>, whose two clouds can disappear together.</p><p>In the fourth test case the two clouds have different types, so there is no legal first move.</p></div>