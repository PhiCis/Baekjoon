# [Platinum V] Lineup the Dominoes - 25901 

[문제 링크](https://www.acmicpc.net/problem/25901) 

### 성능 요약

메모리: 5096 KB, 시간: 164 ms

### 분류

비트마스킹, 다이나믹 프로그래밍, 비트필드를 이용한 다이나믹 프로그래밍

### 문제 설명

<p>Consider a game of solitary dominoes, where you are given several dominoes with a number of dots on both sides, with the number of dots ranging from 1 to 6, inclusive, and the goal is to line up the dominoes from left to right such that all touching sides between dominoes share the same number of dots. Here is a valid solution with a set of three dominoes:</p>

<p style="text-align: center;"><img alt="" src="https://upload.acmicpc.net/dc375c2d-f593-45bc-963f-f9fda401820c/-/preview/" style="width: 286px; height: 80px;"></p>

<p>Given dominoes D<sub>1</sub> through D<sub>n</sub>, we consider a solution to be different than another solution if at least one domino is in a different location in the two solutions. Also, we allow dominoes to be flipped so, for example, a domino that reads 5, 2 from left to right can also be placed to read 2, 5 from left to right by flipping it. Note that for two solutions to be different, only the positions of dominoes matter, i.e., the values on the dominoes and the orientation of each domino does not matter. For example, let’s assume D<sub>1</sub>=[4,4] and D<sub>2</sub>=[4,4]; the solution {D<sub>1</sub>, D<sub>2</sub>} is different from the solution {D<sub>2</sub>, D<sub>1</sub>} even though both solutions represent the same pattern: {D<sub>1</sub>, D<sub>2</sub>}=[4,4][4,4] and {D<sub>2</sub>, D<sub>1</sub>}=[4,4][4,4]. But the solution {D<sub>1</sub>, D<sub>2</sub>} is not different from any other {D<sub>1</sub>, D<sub>2</sub>} even if we flip one or both dominoes.</p>

<p>Using the three dominoes above, multiple solutions exist. One solution is shown above; another solution is D<sub>1</sub>, D<sub>3</sub> and D<sub>2</sub>, in sequence. We can get the latter to work by flipping both D<sub>2</sub> and D<sub>3</sub> compared to how they are shown above. Note again that these two solutions are different since one solution is {D<sub>1</sub>, D<sub>2</sub>, D<sub>3</sub>} and one is {D<sub>1</sub>, D<sub>3</sub>, D<sub>2</sub>}, i.e., the position of D<sub>2</sub> has changed (and position of D<sub>3</sub> as well).</p>

<p>Given a set of dominoes, count the number of different solutions to the domino puzzle. As previously described, a correct solution will arrange all the dominoes in a line such that all touching sides between dominoes share the same number of dots. Since the number of solutions may be very large, calculate it mod 10<sup>9</sup> + 7.</p>

### 입력 

 <p>The first input line contains a single positive integer, m (1 ≤ m ≤ 100), indicating the number of sets of dominoes to evaluate. This is followed by the data for these sets of dominoes.</p>

<p>The first line of input for each set of dominoes will contain an integer, n (1 ≤ n ≤ 16), the number of dominoes for that set. Each of the following n lines will contain two space separated integers, s<sub>i</sub> (1 ≤ s<sub>i</sub> ≤ 6) and t<sub>i</sub> (1 ≤ t<sub>i</sub> ≤ 6), representing the number of dots on each side of the ith domino.</p>

### 출력 

 <p>For each set of dominoes, on a line by itself, output the number of different solutions to the domino puzzle mod 10<sup>9</sup> + 7.</p>

