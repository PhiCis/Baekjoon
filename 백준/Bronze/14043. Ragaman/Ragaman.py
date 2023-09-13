a, b=input(), input()
for i in range(26):
	if a.count(chr(97+i))<b.count(chr(97+i)):
		print("N")
		exit(0)
print("A")