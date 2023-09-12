n=int(input())
A=list(map(int, input().split()))
B=list(map(int, input().split()))
C=list(map(int, input().split()))
for i in range(n):
	print(A[i]+B[i]+C[i]-min(A[i], B[i], C[i])-max(A[i], B[i], C[i]), end=" ")