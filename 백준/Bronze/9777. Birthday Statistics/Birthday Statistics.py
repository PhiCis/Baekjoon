n=int(input())
A=[0]*13
for i in range(n):
	A[int(input().split()[1].split('/')[1])]+=1
for i in range(1, 13):
	print(i, A[i])