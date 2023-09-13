n=int(input())
A=list(map(int, input().split()))
a, b=input().split()
a=int(a)-1
ans=0
if b=="right":
	for i in range(a, n):
		ans+=A[i]
else:
	for i in range(a+1):
		ans+=A[i]
print(ans, end=" ")
a, b=input().split()
a=int(a)-1
ans=0
if b=="right":
	for i in range(a, n):
		if A[i]==0: ans+=1
else:
	for i in range(a+1):
		if A[i]==0: ans+=1
print(ans)