n=int(input())
for i in range(n):
	a, b, c, d=sorted(list(map(int, input().split())))
	A, B, C=0, 0, 0
	if   a**2+b**2==c**2: A+=1
	elif a**2+b**2 >c**2: B+=1
	elif a   +b    >c   : C+=1
	if   a**2+b**2==d**2: A+=1
	elif a**2+b**2 >d**2: B+=1
	elif a   +b    >d   : C+=1
	if   a**2+c**2==d**2: A+=1
	elif a**2+c**2 >d**2: B+=1
	elif a   +c    >d   : C+=1
	if   b**2+c**2==d**2: A+=1
	elif b**2+c**2 >d**2: B+=1
	elif b   +c    >d   : C+=1
	print(A, B, C)