t=int(input())
for i in range(t):
	input()
	a, b=map(int, input().split())
	A=[0]*(a+1)
	for j in range(1, a+1):
		A[j]=a-j
	for j in range(b):
		A[int(input())]=a+j
	ans=100000000
	ansi=0
	for j in range(1, a+1):
		if A[j]<ans:
			ans, ansi=A[j], j
	print(ansi)