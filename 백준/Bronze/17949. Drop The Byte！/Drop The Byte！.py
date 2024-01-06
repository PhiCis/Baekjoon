a=input()
n=int(input())
b=input().split()
pnt=0
for i in b:
	if i=="char":
		print(int(a[pnt:pnt+2], 16), end=" ")
		pnt+=2
	if i=="int":
		print(int(a[pnt:pnt+8], 16), end=" ")
		pnt+=8
	if i=="long_long":
		print(int(a[pnt:pnt+16], 16), end=" ")
		pnt+=16