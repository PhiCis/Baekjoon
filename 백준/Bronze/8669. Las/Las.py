n=int(input())
m=[0]*1000010
for i in range(n):
	a, b=input().split()
	m[int(b)]=1
print(m.count(1))
