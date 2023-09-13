n=int(input())
m=dict()
for i in range(n):
	a=len(input().split())
	try: m[a]+=1
	except: m[a]=1
m=sorted(m.items())
for i in m:
	print(i[0], i[1])