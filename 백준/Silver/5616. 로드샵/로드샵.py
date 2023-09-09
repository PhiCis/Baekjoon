from math import *
a, b, c=map(int, input().split())
if c-(a*b)<0:
    print(0)
else:
    c-=(a*b)
    print(factorial(a+c-1)//factorial(c)//factorial(a-1))
    