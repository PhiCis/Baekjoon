from math import *
a, b=map(int, input().split())
x, y=map(int, input().split())
print((factorial(x+y-2)//factorial(x-1)//factorial(y-1)*factorial(a+b-x-y)//factorial(a-x)//factorial(b-y))%1000007)