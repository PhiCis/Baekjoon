n, m=map(int, input().split())
x, y=0, 0
while True:
	a, b=map(int, input().split())
	if a==b==0: break
	x, y=x+a, y+b
	if x<0: x=0
	if x>n: x=n
	if y<0: y=0
	if y>m: y=m
	print(x, y)