n=int(input())
A=list(map(int, input().split()))
cnt=0
ans=0
for i in range(n):
	if A[i]==1:
		cnt+=1
	else:
		ans=max(ans, cnt)
		cnt=0
ans=max(ans, cnt)
print(ans)