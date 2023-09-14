t=int(input())
for x in range(1, t+1):
	print("Case #%d: "%x, end="")
	n=int(input())
	A=list(map(int, input().split()))
	m=int(input())
	for i in range(m):
		k=int(input())
		ans=0
		for j in range(n):
			if min(A[2*j], A[2*j+1])<=k<=max(A[2*j], A[2*j+1]): ans+=1
		print(ans, end=" ")
	if x != t: input()
	print()