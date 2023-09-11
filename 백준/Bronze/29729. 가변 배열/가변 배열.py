a, b, c=map(int, input().split())
m=0
for i in range(b+c):
	d=int(input())
	if d==1:
		m+=1
	else:
		m-=1
	if m>a:
		a=a*2
print(a)