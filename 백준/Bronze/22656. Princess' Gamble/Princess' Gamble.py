while True:
	n, m, p=map(int, input().split())
	if n==m==p==0: break
	m-=1
	A=[0]*n
	for i in range(n): A[i]=int(input())
	S=sum(A)
	try: print(S*(100-p)//A[m])
	except: print(0)