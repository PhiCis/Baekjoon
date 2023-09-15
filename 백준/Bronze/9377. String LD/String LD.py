while True:
	n=int(input())
	if n==0: break
	A=[]
	for i in range(n):
		A.append(input())
	cnt=0
	flag=True
	while flag:
		A=sorted(list(map(lambda x: x[1:], A)))
		for i in range(n):
			if A[i]=="":
				if flag: print(cnt)
				flag=False
		for i in range(1, n):
			if A[i]==A[i-1]:
				if flag: print(cnt)
				flag=False
		cnt+=1
