a, b=input().split()
b=int(b)
if a[0]=='r':
	if b>=16: print(4)
	elif b>=11: print(3)
	elif b>=6: print(2)
	elif b>=2: print(1)
	else: print(0)
if a[0]=='c':
	if b>=15: print(3)
	elif b>=8: print(2)
	elif b>=2: print(1)
	else: print(0)
if a[0]=='i':
	if b>=17: print(5)
	elif b>=13: print(4)
	elif b>=9: print(3)
	elif b>=5: print(2)
	elif b>=2: print(1)
	else: print(0)