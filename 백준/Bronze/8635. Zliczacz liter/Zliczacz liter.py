A=[0]*128
n=int(input())
for i in range(n):
	a=input()
	for j in a:
		A[ord(j)]+=1
for i in range(97, 97+26):
	if A[i]: print(chr(i), A[i])
for i in range(65, 65+26):
	if A[i]: print(chr(i), A[i])