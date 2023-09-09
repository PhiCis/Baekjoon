a, b=map(int, input().split())
a = str(a ** b)
while len(a) > 70:
	print(a[:70])
	a=a[70:]
print(a)