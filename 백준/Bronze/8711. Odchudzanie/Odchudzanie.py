n=int(input())
A=map(int, input().split())
tmp=0
ans=0
for i in A:
	tmp=max(tmp, i)
	ans=max(ans, tmp-i)
print(ans)