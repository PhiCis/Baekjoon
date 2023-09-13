n=int(input())
A, B=0, 0
for i in range(n):
	a=input()
	A+=a[:2].count('0')
	B+=a[2:].count('0')
C=min(A//2, B//2)
print(C, A-2*C, B-2*C)