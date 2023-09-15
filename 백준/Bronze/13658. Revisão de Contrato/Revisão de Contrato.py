while True:
	a, b=input().split()
	if a==b=="0": break
	b=b.replace(a, "")
	if b=="": b="0"
	print(int(b))