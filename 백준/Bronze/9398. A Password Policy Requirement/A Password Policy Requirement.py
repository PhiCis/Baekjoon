n=int(input())
for i in range(n):
	a=input()
	if len(a)<6: print(0)
	else:
		ans=10**10
		for i in range(len(a)):
			A, B, C=0, 0, 0
			for j in range(i, len(a)):
				if 'A'<=a[j]<='Z': A+=1
				if 'a'<=a[j]<='z': B+=1
				if '0'<=a[j]<='9': C+=1
				if A>0 and B>0 and C>0:
					ans=min(ans, max(6, j-i+1))
		if ans==10**10: print(0)
		else: print(ans)