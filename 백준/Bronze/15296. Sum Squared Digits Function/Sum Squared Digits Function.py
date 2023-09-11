n=int(input())
for i in range(n):
	a,b,c=map(int, input().split())
	ans=0
	while c>0:
		ans+=(c%b)**2
		c//=b
	print(a, ans)