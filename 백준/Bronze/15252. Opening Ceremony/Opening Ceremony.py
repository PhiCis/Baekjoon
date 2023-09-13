t=int(input())
for x in range(t):
	print("Data Set %d:"%(x+1))
	n, m=map(int, input().split())
	A=list(map(int, input().split()))
	B=list(map(int, input().split()))
	for i in range(m):
		A[B[i]-1]-=1
	print(max(A))
	print()