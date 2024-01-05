n=int(input())
x=[0]*n
y=[0]*n
ans=10**100
ansx, ansy=0, 0
for i in range(n):
	x[i], y[i]=map(int, input().split())
for i in range(n):
	for j in range(i+1, n):
		if ans>(x[i]-x[j])**2+(y[i]-y[j])**2:
			ans=(x[i]-x[j])**2+(y[i]-y[j])**2
			ansx, ansy=i, j
print(ansx+1, ansy+1)