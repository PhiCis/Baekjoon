def f(a):
	if a==a[::-1]: return True
	else: return False
n=int(input())
for i in range(n):
	a=input()
	if f(a): print(0)
	else:
		if len(a)%2==1:
			i, j=len(a)//2-1, len(a)//2
			while i>=0 and j<len(a) and a[i]==a[j]:
				i, j=i-1, j+1
			if f(a[:j]+a[j+1:]): print(1)
			else:
				i, j=len(a)//2, len(a)//2+1
				while i>=0 and j<len(a) and a[i]==a[j]:
					i, j=i-1, j+1
				if f(a[:i]+a[i+1:]): print(1)
				else: print(2)
		else:
			i, j=len(a)//2-1, len(a)//2-1
			while i>=0 and j<len(a) and a[i]==a[j]:
				i, j=i-1, j+1
			if f(a[:j]+a[j+1:]): print(1)
			else:
				i, j=len(a)//2, len(a)//2
				while i>=0 and j<len(a) and a[i]==a[j]:
					i, j=i-1, j+1
				if f(a[:i]+a[i+1:]): print(1)
				else: print(2)