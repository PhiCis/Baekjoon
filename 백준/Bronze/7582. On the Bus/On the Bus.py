while True:
	a, b=input().split()
	b=int(b)
	if a=="#" and b==0: break
	n=int(input())
	m=int(input())
	for i in range(m):
		c, d=map(int, input().split())
		n-=c
		n=min(b, n+d)
	print(a, n)