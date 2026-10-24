<h2><a href="https://codeforces.com/contest/1555/problem/D" target="_blank" rel="noopener noreferrer">1555D — Say No to Palindromes</a></h2>

| | |
|---|---|
| **Difficulty** | 1600 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1555D](https://codeforces.com/contest/1555/problem/D) |

## Topics
`brute force` `constructive algorithms` `dp` `strings`

---

## Problem Statement

<div class="header"><div class="title">D. Say No to Palindromes</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Let's call the string <span class="tex-font-style-bf">beautiful</span> if it does not contain a substring of length at least $$$2$$$, which is a palindrome. Recall that a palindrome is a string that reads the same way from the first character to the last and from the last character to the first. For example, the strings <span class="tex-font-style-tt">a</span>, <span class="tex-font-style-tt">bab</span>, <span class="tex-font-style-tt">acca</span>, <span class="tex-font-style-tt">bcabcbacb</span> are palindromes, but the strings <span class="tex-font-style-tt">ab</span>, <span class="tex-font-style-tt">abbbaa</span>, <span class="tex-font-style-tt">cccb</span> are not.</p><p>Let's define <span class="tex-font-style-bf">cost</span> of a string as the minimum number of operations so that the string becomes beautiful, if in one operation it is allowed to change any character of the string to one of the first $$$3$$$ letters of the Latin alphabet (in lowercase).</p><p>You are given a string $$$s$$$ of length $$$n$$$, each character of the string is one of the first $$$3$$$ letters of the Latin alphabet (in lowercase).</p><p>You have to answer $$$m$$$ queries — calculate the cost of the substring of the string $$$s$$$ from $$$l_i$$$-th to $$$r_i$$$-th position, inclusive.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains two integers $$$n$$$ and $$$m$$$ ($$$1 \le n, m \le 2 \cdot 10^5$$$) — the length of the string $$$s$$$ and the number of queries.</p><p>The second line contains the string $$$s$$$, it consists of $$$n$$$ characters, each character one of the first $$$3$$$ Latin letters.</p><p>The following $$$m$$$ lines contain two integers $$$l_i$$$ and $$$r_i$$$ ($$$1 \le l_i \le r_i \le n$$$) — parameters of the $$$i$$$-th query.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each query, print a single integer — the cost of the substring of the string $$$s$$$ from $$$l_i$$$-th to $$$r_i$$$-th position, inclusive.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id009046230043496412" id="id0021270961942652056" class="input-output-copier">Copy</div></div><pre id="id009046230043496412">5 4
baacb
1 3
1 5
4 5
2 3
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0003254088574537062" id="id0037253933875872225" class="input-output-copier">Copy</div></div><pre id="id0003254088574537062">1
2
0
1
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>Consider the queries of the example test.</p><ul> <li> in the first query, the substring is <span class="tex-font-style-tt">baa</span>, which can be changed to <span class="tex-font-style-tt">bac</span> in one operation; </li><li> in the second query, the substring is <span class="tex-font-style-tt">baacb</span>, which can be changed to <span class="tex-font-style-tt">cbacb</span> in two operations; </li><li> in the third query, the substring is <span class="tex-font-style-tt">cb</span>, which can be left unchanged; </li><li> in the fourth query, the substring is <span class="tex-font-style-tt">aa</span>, which can be changed to <span class="tex-font-style-tt">ba</span> in one operation. </li></ul></div>