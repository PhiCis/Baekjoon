# [Platinum V] Royal treasury - 3332 

[문제 링크](https://www.acmicpc.net/problem/3332) 

### 성능 요약

메모리: 30840 KB, 시간: 112 ms

### 분류

임의 정밀도 / 큰 수 연산, 다이나믹 프로그래밍, 트리에서의 다이나믹 프로그래밍, 트리

### 문제 설명

<p>Once upon a time in a kingdom far far away, the royal treasury started getting emptier and emptier. The king decided to change the situation and he invented a new system of cooperation within the office of the royal treasurer. The clerks of the office are supposed to form pairs (in order to avoid being bribed) in such a way that each pair is formed by a clerk and his/her direct subordinate. Your task is to compute, given the structure of the office of the treasurer, the maximum number of pairs that can be formed this way and in how many different ways this is possible.</p>

<p>The office of the treasurer is led by George Skinflint. Each clerk has zero, one or more subordinates and is a subordinate of a single clerk (except for George Skinflint who is responsible only to the king himself). The number of clerks does not exceed 1 000. Your task is to compute the maximum number of pairs that can be formed by clerks in such a way that every pair is formed by a clerk and his/her direct subordinate. In addition, you should also compute the number of ways such pairs can be formed. Note that some clerks need not be contained in a pair.</p>

### 입력 

 <p>The first line of the input contains a single number N that represents the number of clerks, 1 ≤ N ≤ 1 000. The clerks are assigned unique ID numbers from the range between 1 and N. The ID number of the treasurer (Skinflint) is 1. Each of the following N lines corresponds to one of the clerks: it contains his/her ID number, the number K of his/her subordinates, 0 ≤ K ≤ 999, and the ID numbers of his/her K subordinates separated by single spaces. You can assume that the line corresponding to a clerk never appears before the line corresponding to his/her supervisor.</p>

### 출력 

 <p>The output should consist of two lines. The first line of the output should contain a single number that represents the maximum number M of pairs that the clerks can form. The second line should contain the number of different ways in which the clerks can form M pairs obeying the rules given by the king.</p>

