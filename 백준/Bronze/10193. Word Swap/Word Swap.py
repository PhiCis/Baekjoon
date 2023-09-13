n=int(input())
for i in range(n):
	a, b=input().split()
	ans=0
	for j in range(len(a)):
		ans+=ord(a[j])-ord(b[j])
	print("Swapping letters to make "+a+" look like "+b, end="")
	if ans>0:
		print(" earned "+str(ans)+" coins.")
	elif ans<0:
		print(" cost "+str(-ans)+" coins.")
	else:
		print(" was FREE.")