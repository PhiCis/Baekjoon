a=int(input())
b=0
for i in range(a-1):
	if i%2 == 0:
		b = b*2+1
	else:
		b = b*2-1
print(b)