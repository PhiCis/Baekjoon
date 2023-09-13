A=input()
B=input()
for i in range(len(B)):
	if B[i]==" ": print(" ", end="")
	else:
		if ord(B[i])<=ord('Z'):
			print(chr(ord(A[ord(B[i])-ord('A')])-ord('a')+ord('A')), end="")
		else:
			print(A[ord(B[i])-ord('a')], end="")