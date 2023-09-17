n=int(input())
for i in range(n):
	a=int(input())
	flag=True
	for i in range(1, 10):
		b=int(str(i)*len(str(a)))
		if b>=a: continue
		c=a-b
		if str(c).count(str(c%10))==len(str(c)) and flag:
			print(b, c)
			flag=False
	if a>=10:	
		for i in range(1, 10):
			b=int(str(i)*(len(str(a))-1))
			if b>=a: continue
			c=a-b
			if str(c).count(str(c%10))==len(str(c)) and flag:
				print(b, c)
				flag=False