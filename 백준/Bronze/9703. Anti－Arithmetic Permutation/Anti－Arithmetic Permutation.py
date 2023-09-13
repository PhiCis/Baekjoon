n=int(input())
for z in range(n):
	print("Case #%d: "%(z+1), end="")
	m=int(input())
	A=list(map(int, input().split()))
	flag=False
	for i in range(m):
		for j in range(i+1, m):
			for k in range(j+1, m):
				if A[j]*2==A[i]+A[k]:
					if not flag: print("NO")
					flag=True
	if not flag: print("YES")