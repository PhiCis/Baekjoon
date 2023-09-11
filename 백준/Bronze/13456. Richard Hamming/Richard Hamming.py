n=int(input())
for i in range(n):
	k=int(input())
	A, B=list(input().split()), list(input().split())
	ans=0
	for j in range(k): 
		if A[j]!=B[j]: ans+=1;
	print(ans)