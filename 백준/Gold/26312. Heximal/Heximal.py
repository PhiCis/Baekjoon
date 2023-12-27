def pow(a, b):
	if b==0: return 1
	tmp = pow(a, b//2)
	if b%2==1: return tmp*tmp*a
	else: return tmp*tmp

n=int(input())
if n==0:
	print(1)
	exit(0)
n+=1
l, r=0, 1000000
ans=0
while l<=r:
	m=(l+r)//2
	if pow(6, m)<n:
		ans=max(ans, m)
		l=m+1
	else:
		r=m-1
print(ans+1)