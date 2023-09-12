while True:
	a=input()
	if a=="quit!": break
	if len(a)>=4 and a[-2:]=="or" and (a[-3] not in ["a", "e", "i", "o", "u", "y"]): print(a[:-2]+"our")
	else: print(a)