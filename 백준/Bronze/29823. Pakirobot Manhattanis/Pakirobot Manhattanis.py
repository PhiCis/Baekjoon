n=int(input())
A=input()
x, y=0, 0
for i in range(n):
	if A[i]=='N': y+=1
	if A[i]=='S': y-=1
	if A[i]=='E': x+=1
	if A[i]=='W': x-=1
print(abs(x)+abs(y))