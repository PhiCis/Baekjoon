a, b=map(int, input().split())
A=list(map(int, input().split()))
ans=0
for i in range(a):
	if A[i]<=b: ans+=1
print(ans)