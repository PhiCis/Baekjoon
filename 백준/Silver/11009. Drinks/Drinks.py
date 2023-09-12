from math import *
t=int(input())
for i in range(t):
	a, b=map(int, input().split())
	q=factorial(a+b)//factorial(a)//factorial(b)
	p=0
	j=a+b-1
	while j>=a-1:
		p+=factorial(j)//factorial(a-1)//factorial(j-a+1)
		j-=2
	p, q=p//gcd(p, q), q//gcd(p, q)
	print(p,"/", q, sep="")