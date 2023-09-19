# [Platinum II] 빈 문자열 만들기 - 19848 

[문제 링크](https://www.acmicpc.net/problem/19848) 

### 성능 요약

메모리: 5048 KB, 시간: 64 ms

### 분류

자료 구조, 그리디 알고리즘, 스택

### 문제 설명

<p>0과 1로만 이루어져 있으며, 0의 개수와 1의 개수가 동일한 문자열 <span style="font-style: italic;">S</span>가 주어진다. 당신은 <span style="font-style: italic;">S</span>에 다음과 같은 작업을 여러 번 수행할 수 있다:</p>

<p><span style="font-style: italic;">S</span>의 길이 2<span style="font-style: italic;">k</span>인 연속한 부분문자열이 앞 <span style="font-style: italic;">k</span>개 문자가 모두 동일하고, 또한 뒤 <span style="font-style: italic;">k</span>개 문자가 서로 동일하며, 0과 1을 모두 포함할 때, 그 부분문자열을 제거할 수 있다.</p>

<p>예를 들어, <span style="font-style: italic;">S</span> = “0111000011”인 경우, <span style="font-style: italic;">S</span>의 2번째 문자부터 7번째 문자까지인 “111000”을 제거하는 것이 가능하다. 이 작업 후에는 제거된 부분의 앞부분과 뒷부분이 연결되어 <span style="font-style: italic;">S</span> = “0011”이 된다. 그러면 이제 한 번의 작업을 통해 “0011”을 제거할 수 있으므로 초기 <span style="font-style: italic;">S</span> = “0111000011”는 두 번의 작업을 통해 빈 문자열로 만들 수 있다.</p>

<p>여러분의 목표는 최소 횟수의 작업을 통해 <span style="font-style: italic;">S</span>를 빈 문자열로 만드는 것이다. 최소 횟수의 작업으로 <span style="font-style: italic;">S</span>를 빈 문자열로 만드는 과정을 구하여라.</p>

### 입력 

 <p>첫 줄에 0과 1로만 이루어진 문자열 <span style="font-style: italic;">S</span>가 주어진다. <span style="font-style: italic;">S</span>에 포함된 0의 개수와 1의 개수는 동일하다.</p>

### 출력 

 <p>작업들을 통해 <span style="font-style: italic;">S</span>를 빈 문자열로 만드는 것이 불가능하다면 첫 줄에 <code>-1</code>을 출력한다.</p>

<p>그렇지 않은 경우, 첫 줄에 필요한 작업의 최소 횟수 <span style="font-style: italic;">K</span>를 출력한다. 그 다음 <span style="font-style: italic;">K</span>줄에 걸쳐 수행한 작업에 대한 정보를 출력한다.</p>

<p><span style="font-style: italic;">K</span>개 줄 중 <span style="font-style: italic;">i</span>번째 줄에는 두 정수 <span style="font-style: italic;">b</span><sub><span style="font-style: italic;">i</span></sub>와 <span style="font-style: italic;">e</span><sub><span style="font-style: italic;">i</span></sub>를 공백을 사이에 두고 출력한다. 이는 <span style="font-style: italic;">i</span>번째 작업에서 <span style="font-style: italic;">S</span>의 <span style="font-style: italic;">b</span><sub><span style="font-style: italic;">i</span></sub>번째 문자부터 <span style="font-style: italic;">e</span><sub><span style="font-style: italic;">i</span></sub>번째 문자로 이루어진 문자열을 제거하였음을 뜻한다.</p>

<p>최소 횟수의 작업으로 문자열을 지우는 방법이 여러 가지인 경우에는 그 중 아무 것이나 출력해도 된다.</p>

