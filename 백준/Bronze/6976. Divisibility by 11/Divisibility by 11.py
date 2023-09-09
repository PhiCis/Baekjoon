n=int(input())
for i in range(0, n):
	s=int(input())
	s1=s
	while True:
		print(s)
		if s<100:
		    break
		s=s//10-s%10
	if s1%11==0:
		print("The number %d is divisible by 11."%s1)
	else:
		print("The number %d is not divisible by 11."%s1)
	print()
	