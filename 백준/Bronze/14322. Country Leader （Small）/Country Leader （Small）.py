t=int(input())
for x in range(1, t+1):
	print("Case #%d: "%x, end="")
	n=int(input())
	ans, ansi=0, ""
	for i in range(n):
		cnt=0
		a=input()
		for j in "QWERTYUIOPLKJHGFDSAZXCVBNM":
			if a.count(j)>0: cnt+=1
		if cnt>ans or (cnt==ans and a<ansi):
			ans, ansi=cnt, a
	print(ansi)