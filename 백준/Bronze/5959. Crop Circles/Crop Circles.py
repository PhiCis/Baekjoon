n=int(input())
x=[0]*n
y=[0]*n
r=[0]*n
ans=[0]*n
for i in range(n):
	x[i], y[i], r[i]=map(int, input().split())
for i in range(n):
	for j in range(i+1, n):
		if (r[i]+r[j])**2>(x[i]-x[j])**2+(y[i]-y[j])**2:
			ans[i]+=1
			ans[j]+=1
for i in range(n):
	print(ans[i])