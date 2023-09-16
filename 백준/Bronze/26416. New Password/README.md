# [Bronze II] New Password - 26416 

[문제 링크](https://www.acmicpc.net/problem/26416) 

### 성능 요약

메모리: 31256 KB, 시간: 60 ms

### 분류

구현, 문자열

### 문제 설명

<p>A company named Gooli has issued a new policy that their employees account passwords must contain:</p>

<ol>
	<li>At least $7$ characters.</li>
	<li>At least one uppercase English alphabet letter.</li>
	<li>At least one lowercase English alphabet letter.</li>
	<li>At least one digit.</li>
	<li>At least one special character. There are four special characters: <code>#</code>, <code>@</code>, <code>*</code>, and <code>&</code>.</li>
</ol>

<p>The company has asked all the employees to change their passwords if the above requirements are not satisfied. Charles, an employee at Gooli, really likes his old password. In case his old password does not satisfy the above requirements, Charles will fix it by appending letters, digits, and special characters. Can you help Charles to find the shortest possible new password that satisfies his company's requirements?</p>

### 입력 

 <p>The first line of the input gives the number of test cases, $T$. $T$ test cases follow. Each test case consists of two lines. The first line of each test case contains an integer $N$, denoting the length of the old password. The second line of each test case contains the old password of length $N$. Old password contains only digits, letters, and special characters.</p>

### 출력 

 <p>For each test case, output one line containing <code>Case #x: y</code>, where $x$ is the test case number (starting from 1) and $y$ is a valid new password, obtained by possibly fixing the old password in the way that Charles wants and satisfying the company's requirements.</p>

<p>It is guaranteed that at least one solution exists. If there are multiple solutions, you may output any one of them.</p>

