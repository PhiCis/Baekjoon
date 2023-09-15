t=int(input())
for x in range(t):
	A=input().split(", ")
	for i in A:
		if int(i)%4==0: print(i, end=" ")
	print()