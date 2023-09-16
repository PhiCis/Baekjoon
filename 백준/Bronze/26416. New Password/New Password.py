n=int(input())
for x in range(1, n+1):
	m=int(input())
	a=input()
	ans=0
	for i in "1234567890":
		ans+=a.count(i)
	if ans==0: a+="1"
	ans=0
	for i in "QWERTYUIOPASDFGHJKLZXCVBNM":
		ans+=a.count(i)
	if ans==0: a+="A"
	ans=0
	for i in "qwertyuiopasdfghjklzxcvbnm":
		ans+=a.count(i)
	if ans==0: a+="a"
	ans=0
	for i in "#@*&":
		ans+=a.count(i)
	if ans==0: a+="#"
	if len(a)<7: a+="1"*(7-len(a))
	print("Case #%d: %s"%(x, a))