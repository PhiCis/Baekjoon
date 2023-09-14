a=input()
b=int(a[:2])
if a[6]=="-":
	if b<=19: print("20"+a[:6]+a[7:])
	else: print("19"+a[:6]+a[7:])
else:
	if b>=40: print("18"+a[:6]+a[7:])
	else: print("19"+a[:6]+a[7:])