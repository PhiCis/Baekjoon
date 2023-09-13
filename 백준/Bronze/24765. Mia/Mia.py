while True:
	a, b, c, d=map(int, input().split())
	A, B=0, 0
	if a==b==c==d==0: break
	if a==1 and b==2: A=10000
	elif a==2 and b==1: A=10000
	elif a==b: A=a*1000
	else: A=max(a, b)*10+min(a, b)
	if c==1 and d==2: B=10000
	elif c==2 and d==1: B=10000
	elif c==d: B=c*1000
	else: B=max(c, d)*10+min(c, d)
	if A>B: print("Player 1 wins.")
	elif A<B: print("Player 2 wins.")
	else: print("Tie.")