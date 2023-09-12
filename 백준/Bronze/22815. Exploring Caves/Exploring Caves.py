n=int(input())
for i in range(n):
	p=[0, 0]
	ansp=[0, 0]
	ans=0
	while True:
		a,b=map(int, input().split())
		if a==b==0: break;
		p[0]+=a
		p[1]+=b
		if ans < p[0]**2+p[1]**2 or (ans==p[0]**2+p[1]**2 and p[0] > ansp[0]):
			ans=p[0]**2+p[1]**2
			ansp=p[:]
	print(ansp[0], ansp[1])