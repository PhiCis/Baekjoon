a=input()
b=input()
ans=0
for i in b:
	if i>='a': ans+=ord(i)-ord('a')+1
	else: ans+=ord(i)-ord('A')+1
if ans!=len(a): print("non sequitur")
else:
	ans=0
	cnt=0
	for i in b:
		if i>='a':
			for j in range(ord(i)-ord('a')+1):
				ans+=ord(a[cnt])-48
				cnt+=1
		else:
			for j in range(ord(i)-ord('A')+1):
				cnt+=1
	print(ans)