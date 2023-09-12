n=int(input())
while n>0:
	n-=1
	a, b, c=input(), input(), input()
	if a==b[:len(a)] or a==c[:len(a)] or a==b[len(b)-len(a):] or a==c[len(c) - len(a):]: print("No")
	elif b==a[:len(b)] or b==c[:len(b)] or b==a[len(a)-len(b):] or b==c[len(c) - len(b):]: print("No")
	elif c==b[:len(c)] or c==a[:len(c)] or c==b[len(b)-len(c):] or c==a[len(a) - len(c):]: print("No")
	else: print("Yes")