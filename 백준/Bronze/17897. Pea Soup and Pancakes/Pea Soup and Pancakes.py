n=int(input())
for i in range(n):
	m=int(input())
	c=input()
	A, B=0, 0
	for j in range(m):
		a=input()
		if a=="pea soup": A=1
		if a=="pancakes": B=1
	if A==1 and B==1:
		print(c)
		exit(0)
print("Anywhere is fine I guess")