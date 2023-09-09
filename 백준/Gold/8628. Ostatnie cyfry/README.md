# [Gold V] Ostatnie cyfry - 8628 

[문제 링크](https://www.acmicpc.net/problem/8628) 

### 성능 요약

메모리: 2024 KB, 시간: 0 ms

### 분류

수학, 정수론, 런타임 전의 전처리

### 문제 설명

<p>Niech $k$ będzie liczbą całkowitą dodatnią. Poszukujemy wszystkich liczb całkowitych $x$ z przedziału $[0,10^k-1]$, dla których $x^a$ ma dokładnie takie same $k$ ostatnich cyfr dziesiętnych jak $x$. Brak którejś cyfry w którejkolwiek z liczb traktujemy dokładnie tak samo, jak gdyby tą cyfrą było $0$.</p>

<p>Napisz program, który:</p>

<ul>
	<li>wczyta ze standardowego wejścia liczby $k$ oraz $a$,</li>
	<li>wyznaczy wszystkie takie liczby $x$ z przedziału $[0,10^k-1]$, dla których $k$ ostatnich cyfr $x^a$ jest takich samych jak $x$,</li>
	<li>wypisze wynik na standardowe wyjście.</li>
</ul>

### 입력 

 <p>Pierwszy i jedyny wiersz wejścia zawiera dwie liczby całkowite $k$ oraz $a$ ($1 ≤ k ≤ 9$, $a \in \{2,3\}$), oddzielone pojedynczym odstępem.</p>

### 출력 

 <p>Wyjście powinno zawierać wszystkie liczby całkowite nieujemne nie większe niż $10^k$, dla których ostatnie $k$ cyfr $x^a$ jest takich samych jak $x$, pooddzielane pojedynczymi odstępami.</p>

