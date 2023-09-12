a, b, c, d, e=map(int, input().split())
a, b=(a+c+(b+d)//60)%12, (b+d)%60
if e==1:
	print(a, b)
elif b%12==0:
	print("@", a*5+b//12)
else:
	print(a*5+b//12, (a*5+b//12+1)%60)