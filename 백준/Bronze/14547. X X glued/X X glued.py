while True:
	a=input().split()
	if len(a)==1: exit(0)
	a=a[1]
	if a[0]==a[1] and a[2]==a[3] and a[1]!=a[2]:
		print(a[0], a[0], "glued and", a[2], a[2], "glued")
	elif a[0]==a[1] or a[1]==a[2]:
		print(a[1], a[1], "glued")
	elif a[2]==a[3]:
		print(a[2], a[2], "glued")