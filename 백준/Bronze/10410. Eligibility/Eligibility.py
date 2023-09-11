n=int(input())
for i in range(n):
	a,b,c,d=input().split()
	print(a, end=" ")
	if int(b[:4])>=2010:
		print("eligible")
	elif int(c[:4])>=1991:
		print("eligible")
	elif int(d)>=41:
		print("ineligible")
	else:
		print("coach petitions")

