n, m=map(int, input().split())
A=list(map(int, input().split()))
ans=-1
ansi=0
for i in range(n):
	B=list(map(int, input().split()))
	cnt=0
	for j in range(m):
		if A[j]==B[j]: cnt+=1
	if cnt>ans:
		ans, ansi=cnt, i+1
print(ansi)