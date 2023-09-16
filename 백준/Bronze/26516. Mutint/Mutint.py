while True:
	a=input()
	if a=="0": break
	b=max(a)
	for i in range(len(a)):
		if a[i]==b:
			if int(b)%2==0:
				a=a[:i]+str((int(b)+4)%10)+a[i+1:]
			else:
				a=a[:i]+"0"+a[i+1:]
			break
	print(int(a))