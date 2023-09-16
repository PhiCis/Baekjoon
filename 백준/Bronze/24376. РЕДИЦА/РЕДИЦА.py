n, m=map(int, input().split())
A=""
cnt=1
while True:
	A+=str(cnt)
	cnt*=n
	try:print(A[m-1])
	except:pass
	else: break