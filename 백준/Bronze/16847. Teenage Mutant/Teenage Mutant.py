t=int(input())
for x in range(1, t+1):
	print("Data Set "+str(x)+":")
	a, b=map(int, input().split())
	A=input()
	B=[""]*a
	for i in range(a): B[i]=input()
	ans=0
	for j in range(b):
		flag=False
		for i in range(a):
			if B[i][j]==A[j]: flag=True
		if flag==False:
			ans+=1
	print(str(ans)+"/"+str(b)+"\n")