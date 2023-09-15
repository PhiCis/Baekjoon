a=input()
n=int(input())
for i in range(n):
	b=input()
	if b.count(a[0])==0: continue
	flag=False
	for i in b:
		if a.count(i)==0:
			flag=True
			break
	if (not flag) and len(b)>=4 : print(b)