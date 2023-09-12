n=int(input())
A=list(map(int, input().split()))
m=dict()
for i in range(n): m[abs(A[i])]=0;
ans=0
for i in range(n):
	if A[i]<0:
		if m[-A[i]]==0: ans+=1;
		else: m[-A[i]]-=1
	else:
		m[A[i]]+=1
print(ans)