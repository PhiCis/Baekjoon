while True:
	a,b=map(int, input().split())
	if a==b==0: exit(0);
	A=list(map(int, input().split()))
	ans=-1
	for i in range(a):
		for j in range(i+1, a):
			if b>=A[i]+A[j]: ans=max(ans, A[i]+A[j]);
	if ans==-1: print("NONE");
	else: print(ans);