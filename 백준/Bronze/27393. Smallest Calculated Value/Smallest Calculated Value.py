A, B, C=map(int, input().split())
ans=10**10
for i in range(4):
	for j in range(4):
		a, b, c=A, B, C
		if i==0: a+=b
		elif i==1: a-=b
		elif i==2: a*=b
		elif i==3:
			if a%b>0: continue
			else: a//=b
		if j==0: a+=c
		elif j==1: a-=c
		elif j==2: a*=c
		elif j==3:
			if a%c>0: continue
			else: a//=c
		if a>=0: ans=min(ans, a)
print(ans)