a, b=map(int, input().split())
x=0
ans=0
for i in range(b):
	c, d=input().split()
	d=int(d)
	if c=="enter":
		if x+d>a: ans+=1
		else: x+=d
	else:
		x-=d
print(ans)