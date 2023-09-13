t=int(input())
for x in range(t):
	print("Test case #%d:"%(x+1))
	n=int(input())
	M=dict()
	for i in range(n):
		a, b=input().split()
		M[a]=b
	m=int(input())
	for i in range(m):
		a=input()
		print(a, end=" ")
		for j in range(len(a)):
			if a[j] in M:
				a=a[:j]+M[a[j]]+a[j+1:]
		if a==a[::-1]: print("YES")
		else: print("NO")
	print()