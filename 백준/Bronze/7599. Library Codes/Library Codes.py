while True:
	a, b=input().split()
	b=int(b)
	if a=="#" and b==0: break
	print(a, "Library")
	n=int(input())
	for i in range(n):
		c, d=input().split()
		c=int(c)
		if c>=b*len(d)+2: print("Book %d horizontal"%(i+1))
		else: print("Book %d vertical"%(i+1))