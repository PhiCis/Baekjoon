t=int(input())
for x in range(t):
	n=int(input())
	m=[0]*11
	for i in range(n):
		a, b=map(int, input().split())
		m[b]=max(m[b], a)
	flag=False
	for i in range(1, 11):
		if m[i]==0:
			print("MOREPROBLEMS")
			flag=True
			break
	if not flag:
		ANS=0
		for i in range(1, 11): ANS+=m[i]
		print(ANS)
			
