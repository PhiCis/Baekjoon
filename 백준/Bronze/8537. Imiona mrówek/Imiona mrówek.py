n=int(input())
ans=0
for i in range(n):
	a=input()
	A=[0]*26
	for j in range(26):
		A[j]=a.count(chr(97+j))
	cnt=0
	for j in range(26):
		if A[j]: cnt+=1
	ans=max(ans, cnt)
print(ans)