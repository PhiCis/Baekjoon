A=[]
while True:
	try: A.append(len(input()))
	except: break
B=max(A)
A=list(map(lambda x: (B-x)**2, A))
print(sum(A[:-1]))