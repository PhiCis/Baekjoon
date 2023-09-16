while True:
	n=int(input())
	if n==0: break
	A=[]
	for i in range(n): A.append(input())
	print(sorted(A, key=lambda x: -sum([x.count(i+i) for i in "aeiouy"]))[0])