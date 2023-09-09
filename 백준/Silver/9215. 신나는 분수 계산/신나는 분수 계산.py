from fractions import *
cnt=0
while True:
	cnt+=1
	n=int(input())
	#print(n)
	if n==0:
		break
	ans=Fraction(0, 1)
	for i in range(n):
		a=input()
		if a.count(',')==1:
			a, b=a.split(',')
			b, c=b.split('/')
			a, b=int(a)*int(c)+int(b), int(c)
			ans+=Fraction(a, b)
		elif a.count('/')==1:
			a, b=map(int, a.split('/'))
			ans+=Fraction(a, b)
		else:
			ans+=Fraction(int(a), 1)
	print("Test "+str(cnt)+": ", end="")
	if ans==Fraction(0, 1):
		print(0)
	elif ans.numerator>=ans.denominator:
		print(ans.numerator//ans.denominator, end="")
		if ans.numerator%ans.denominator>0:
			print(",", ans.numerator%ans.denominator, "/", ans.denominator, sep="", end="")
		print()
	else:
		print(ans.numerator, "/", ans.denominator, sep="")	
		