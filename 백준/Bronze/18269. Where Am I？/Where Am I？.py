n=int(input())
a=input()
for i in range(1, n+1):
	m=dict()
	flag=0
	for j in range(0, n-i+1):
		if a[j:j+i] in m:
			flag=1
		else: m[a[j:j+i]]=1
	if flag==0:
		print(i)
		exit(0)