n=int(input())
for j in range(n):
	i=min(j, n-1-j)
	print("*"*(2*i+1)+" "*(2*n-4*i-2)+"*"*(2*i+1))