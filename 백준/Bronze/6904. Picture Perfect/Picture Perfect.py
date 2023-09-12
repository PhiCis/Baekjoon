while True:
	a=int(input())
	if a==0: break
	ans=10**10
	for i in range(1, a+1):
		if i*i>a: break
		if a%i==0: ans, ansi=2*(a//i+i), i
	print("Minimum perimeter is", ans, "with dimensions", ansi, "x", a//ansi)
	