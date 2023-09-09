# [Gold V] Octagons - 4139 

[문제 링크](https://www.acmicpc.net/problem/4139) 

### 성능 요약

메모리: 2024 KB, 시간: 12 ms

### 분류

그리디 알고리즘, 구현, 문자열

### 문제 설명

<p>Below is a picture of an infinite hyperbolic tessellation of octagons. If we think of this as a graph of vertices (of degree three), then there exists an isomorphism of the graph which maps any vertex <em>x</em> onto any other vertex <em>y</em>. Every edge is given a label from the set <em>{a,b,c}</em> in such a way that every vertex has all three types of edges incident on it, and the labels alternate around each octagon. Part of this labeling is illustrated in the diagram.</p>

<p style="text-align: center;"><img alt="" src=""></p>

<p>So a path in this graph (starting from any vertex) can be specified by a sequence of edge labels. Your job is to write a program which, given a squence of labels such as "abcbcbcabcaccabb", returns "closed" if the path ends on the same vertex where it starts, and returns "open" otherwise.</p>

### 입력 

 <p>The input will begin with a number <em>Z</em> ≤ 200 on a line by itself. This is followed by <em>Z</em> lines, each of which is a squence of length at least 1 and at most 40 of 'a's 'b's and 'c's.</p>

### 출력 

 <p>For each input instance, the output will be the words "closed" or "open", each on a single line.</p>

