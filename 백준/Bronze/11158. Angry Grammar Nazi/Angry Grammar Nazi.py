n=int(input())
for i in range(n):
	a=" "+input()+" "
	b=""
	for i in a:
		if i==" ": b+="  "
		else: b+=i
	a=b
	ans=10*(a.count(" u ")+a.count(" ur ")+a.count(" would  of ")+a.count(" should  of "))
	a=a.split()
	for i in a:
		if i.count("lol")>0: ans+=10
	print(ans)