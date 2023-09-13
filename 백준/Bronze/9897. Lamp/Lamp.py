a, b, c=map(int, input().split())
A=[0]*a
m=dict()
for i in range(b):
	d, e, f=input().split()
	m[d]=[int(e)-1, int(f)]
for i in range(c):
	d=input()
	for j in range(m[d][0], a, m[d][1]): A[j]=1-A[j]
print(A.count(1))