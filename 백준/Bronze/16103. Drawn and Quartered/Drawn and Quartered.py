a, b=map(int, input().split())
c=input()
b%=3
a//=4
if b==0: print(c)
if b==1: print(c[:a]+c[3*a:]+c[a:3*a])
if b==2: print(c[:a]+c[2*a:]+c[a:2*a])