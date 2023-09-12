n=int(input())
m={"R":0, "P":1, "S":2}
k={0:"R", 1:"P", 2:"S"}
A=input()
B=input()
for i in range(n):
	if A[i]==B[i]:
		print(k[(m[A[i]]+1)%3], end="")
	else:
		print(A[i] if m[A[i]]==(m[B[i]]+1)%3 else B[i], end="")