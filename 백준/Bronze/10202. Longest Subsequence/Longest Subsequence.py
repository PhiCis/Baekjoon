n=int(input())
for i in range(n):
	tmp=input().split()
	m=int(tmp[0])
	A=tmp[1:]
	ans=0
	cnt=0
	for i in range(m):
		cnt=(cnt+1 if A[i]=='X' else 0)
		ans=max(ans, cnt)
	print("The longest contiguous subsequence of X's is of length", ans)