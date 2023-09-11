a, b=map(int, input().split())
c, d=map(int, input().split())
ans=0
for i in range(a, b+1):
	if c-d<=i<=c+d:
		ans+=1
print(ans if ans>0 else "IMPOSSIBLE")