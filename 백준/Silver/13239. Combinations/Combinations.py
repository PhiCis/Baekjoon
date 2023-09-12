from math import *
n=int(input())
for i in range(n):
    a, b=map(int, input().split())
    print(factorial(a)//factorial(b)//factorial(a-b)%1000000007)