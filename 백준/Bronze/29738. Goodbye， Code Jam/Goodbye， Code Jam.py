n=int(input())
for i in range(n):
	a=int(input())
	print("Case #"+str(i+1)+": ", end="")
	if a>4500:
		print("Round 1")
	elif a>1000:
		print("Round 2")
	elif a>25:
		print("Round 3")
	else:
		print("World Finals")