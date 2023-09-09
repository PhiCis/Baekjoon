while True:
	a,b=input().split()
	a=int(a)
	b=int(b)
	if a==0 and b==0:
		quit()
	ans=0
	c=1
	d=2
	if a<=c and c<=b:
		ans=ans+1
	for i in range (0, 1000):
		c, d=d, c+d
		if a<=c and c<=b:
			ans=ans+1
	print(ans)