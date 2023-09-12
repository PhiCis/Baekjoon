n=int(input())
while n>0:
	n-=1
	m=int(input())
	A=list(map(int, input().split()))
	B=list(map(int, input().split()))
	ans=0
	for i in range(m):
		for j in range(i, m):
			if B[j]>=A[i]: ans=max(ans, j-i)
	print("The maximum distance is "+str(ans)+"\n")