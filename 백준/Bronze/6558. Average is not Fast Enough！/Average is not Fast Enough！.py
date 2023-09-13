n, d=input().split()
n=int(n)
d=float(d)
while True:
	try: A=input().split()
	except: break
	a=A[0]
	ans=0
	print(" "*(3-len(a))+a+": ", end="")
	flag=False
	for i in range(1, n+1):
		if A[i]=="-:--:--":
			flag=True
			break
		ans+=int(A[i][0])*3600+int(A[i][2:4])*60+int(A[i][5:7])
	if flag: print("-")
	else:
		ans=round(ans/d)
		print("%d:%02d min/km"%(ans/60, ans%60))