while True:
	n, m=map(int, input().split())
	if n==m==0: break
	A, B=2, m-1
	for i in range(n):
		a, b=input().split()
		a=int(a)
		if b=="SAFE": A=max(A, a+1)
		else: B=min(B, a-1)
	print(A, B)