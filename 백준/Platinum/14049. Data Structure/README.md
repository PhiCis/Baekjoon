# [Platinum V] Data Structure - 14049 

[문제 링크](https://www.acmicpc.net/problem/14049) 

### 성능 요약

메모리: 2804 KB, 시간: 32 ms

### 분류

구현, 수학, 정렬

### 문제 설명

<p>It’s a well-known fact that, inside computers, all data is stored in 2D pyramids of data blocks.</p>

<p>A certain pyramid has N (1 ≤ N ≤ 10<sup>9</sup>) rows, numbered 1..N from top to bottom. Each row r has r block spaces, which are labelled (r, 1)..(r, r) from left to right. Each block space (r, c) in rows 1..(N − 1) rests on top of two supporting block spaces in the row below it - block spaces (r + 1, c) and (r + 1, c + 1). For example, a pyramid with 6 rows is illustrated below, with block spaces (3, 1), (4, 4), and (6, 2) indicated in red:</p>

<p style="text-align: center;"><img alt="" src="https://upload.acmicpc.net/20dc9db9-94fe-43cf-be09-0e93111fe162/-/preview/" style="width: 327px; height: 325px;"></p>

<p>Now, each block space may either contain data, or be empty. A block space containing data is only stable if it’s in the bottom row (row N), or if both of its two supporting block spaces also contain data. The entire pyramid is only stable if all of its non-empty block spaces are stable.</p>

<p>You know that there are M (1 ≤ M ≤ 10<sup>5</sup>) different block spaces which must contain data - the ith of these is block space (r<sub>i</sub>, c<sub>i</sub>) (1 ≤ c<sub>i</sub> ≤ r<sub>i</sub> ≤ N). All of the other block spaces in the pyramid may either be filled with abitrary data or be left empty. However, everyone knows that data is expensive. As such, you’re interested in the smallest amount of data that the pyramid’s block spaces can contain such that at least the M required block spaces contain data, and the entire data structure is stable.</p>

### 입력 

 <p>The first line of the input contains two integers, N and M. The remaining M lines each contain two integers, r<sub>i</sub> and c<sub>i</sub> for i = 1..M.</p>

### 출력 

 <p>Output a single integer, the minimum number of block spaces which can contain data such that the entire pyramid is stable. Note that this value may not fit in a 32-bit signed integer.</p>

