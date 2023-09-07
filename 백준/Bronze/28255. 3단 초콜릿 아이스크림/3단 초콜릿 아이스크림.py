from math import *
n=int(input())
for i in range(n):
    a=input()
    k=ceil(len(a)/3)
    if a==a[:k]+a[k-1::-1]+a[:k]:
        print(1)
    elif a==a[:k]+a[k-2::-1]+a[:k]:
        print(1)
    elif a==a[:k]+a[k-1::-1]+a[1:k]:
        print(1)
    elif a==a[:k]+a[k-2::-1]+a[1:k]:
        print(1)
    else:
        print(0)
