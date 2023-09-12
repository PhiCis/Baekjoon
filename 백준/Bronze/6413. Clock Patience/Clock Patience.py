while True:
	A=[[]]*4
	a=input()
	if a=="#": break
	tmp=[-1]*13
	A[0]=a.split()[::-1]
	A[1]=input().split()[::-1]
	A[2]=input().split()[::-1]
	A[3]=input().split()[::-1]
	now=12
	ans=0
	aans=""
	tmp[now]+=1
	while tmp[now]<=3:
		ans+=1
		ttmp=A[tmp[now]][now][0]
		aans=A[tmp[now]][now]
		if ttmp=="A": now=0
		elif ttmp=="T": now=9
		elif ttmp=="J": now=10
		elif ttmp=="Q": now=11
		elif ttmp=="K": now=12
		else: now=ord(ttmp)-49
		tmp[now]+=1
	print("%02d,%s"%(ans, aans))
		