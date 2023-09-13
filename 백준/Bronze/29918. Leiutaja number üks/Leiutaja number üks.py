a, b=map(int, input().split())
a=a+b*10
A=0
for i in range(5):
	c, d=map(int, input().split())
	A=max(A, c+d*10)
print(max(0, A-a+1))