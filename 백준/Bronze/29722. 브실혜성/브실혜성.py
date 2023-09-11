a,b,c=map(int, input().split("-"))
a,b,c=a-1,b-1,c-1
d=a*360+b*30+c
n=int(input())
d+=n
print("%04d-%02d-%02d"%(d//360+1, d%360//30+1, d%30+1))