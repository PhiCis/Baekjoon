from math import *
t=int(input())
for i in range(t):
    a, b=map(int, input().split())
    a=factorial(a)
    ans=0
    while a>0:
        if a%10==b:
            ans+=1
        a//=10
    print(ans)
