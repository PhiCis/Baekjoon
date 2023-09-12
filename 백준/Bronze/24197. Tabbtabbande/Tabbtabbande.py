a, b=map(int, input().split())
A=[1]+list(map(int, input().split()))
ans=0
for i in range(1, b+1):
	ans+=min(abs(A[i]-A[i-1]), a-abs(A[i]-A[i-1]))
print(ans)