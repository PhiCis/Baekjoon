def convert(num, base):
    q, r = divmod(num, base)
    if q == 0:
        return str(r)
    else:
        return convert(q, base) + str(r)

while True:
	try:
		a, b, c=input().split()
		a=int(a)
		b=int(b, a)
		c=int(c, a)
		print(convert(b%c, a))
	except:
		break
	