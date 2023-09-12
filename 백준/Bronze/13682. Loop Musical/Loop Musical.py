while True:
	n=int(input())
	if n==0: break;
	A=list(map(int, input().split()))
	ans=0
	for i in range(n):
		if A[(i+n-1)%n]<A[i]>A[(i+1)%n]: ans+=1;
		if A[(i+n-1)%n]>A[i]<A[(i+1)%n]: ans+=1;
	print(ans)