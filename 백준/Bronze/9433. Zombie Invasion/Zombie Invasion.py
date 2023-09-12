t=int(input())
for j in range(t):
	A=list(map(int, input().split()))
	ans=[0]*20
	cnt=0
	for i in range(19, -1, -1):
		cnt+=A[i]
		ans[i]=cnt%2
		cnt//=2
	print(cnt*2+ans[0], end=" ")
	for i in range(1, 20):
		print(ans[i], end=" ")
	print()