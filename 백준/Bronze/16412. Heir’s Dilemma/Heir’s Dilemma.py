a, b=map(int, input().split())
ans=0
for i in range(a, b+1):
	flag=False
	tmp=[0]*10
	for j in range(6):
		tmp[int(str(i)[j])]+=1
	if tmp[0]>0:
		flag=True
	else:
		for j in range(10):
			if tmp[j]>1:
				flag=True
		for j in range(6):
			if i%int(str(i)[j])!=0:
				flag=True
	if not flag: ans+=1;
print(ans)