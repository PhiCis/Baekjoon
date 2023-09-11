n=int(input())
for i in range(n):
	a,b,c=map(int, input().split())
	if min(b, c)>=a-1:
		if b==c: print(2);
		else: print(1);
	else:
		print(a-max(b, c))