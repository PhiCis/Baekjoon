# [Platinum IV] Наскальная живопись - 28895 

[문제 링크](https://www.acmicpc.net/problem/28895) 

### 성능 요약

메모리: 31168 KB, 시간: 92 ms

### 분류

매내처, 문자열

### 제출 일자

2024년 1월 3일 16:47:50

### 문제 설명

<p>Доктор Брэйвстоун вместе с компанией нашел в Джуманджи древнюю пещеру. На стене этой пещеры была написана строка <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D460 TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>s</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$s$</span></mjx-container>, состоящая из строчных латинских букв. Теперь, чтобы продолжить прохождение, исследователям нужно определить максимальную длину палиндрома, который является подстрокой некоторого циклического сдвига строки <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D460 TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>s</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$s$</span></mjx-container>.</p>

<p>Палиндромом называется строка, которая читается одинаково как слева направо, так и справа налево. Например, строки <code>abacaba</code>, <code>abba</code> и <code>q</code>  --- являются палиндромами. Подстрокой строки называется некоторая последовательность подряд идущих символов этой строки. Циклическим сдвигом строки называется строка, полученная из исходной отрезанием некоторого префикса и дописыванием его в конец строки. Например, строки <code>bacabaa</code>, <code>cabaaba</code> и <code>abacaba</code> являются циклическими сдвигами строки <code>abacaba</code>.</p>

### 입력 

 <p>В единственной строке дана непустая строка <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D460 TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>s</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$s$</span></mjx-container>, состоящая из строчных латинских букв, длина которой не превышает <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-msup><mjx-mn class="mjx-n"><mjx-c class="mjx-c31"></mjx-c><mjx-c class="mjx-c30"></mjx-c></mjx-mn><mjx-script style="vertical-align: 0.393em;"><mjx-mn class="mjx-n" size="s"><mjx-c class="mjx-c36"></mjx-c></mjx-mn></mjx-script></mjx-msup></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><msup><mn>10</mn><mn>6</mn></msup></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$10^6$</span></mjx-container>.</p>

### 출력 

 <p>Выведите единственное число  --- искомую максимального длину палиндрома.</p>

