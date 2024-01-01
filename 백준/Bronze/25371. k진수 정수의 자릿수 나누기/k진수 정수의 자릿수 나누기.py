n, k=map(int, input().split())
ans=0
ANS=0
tmp=0
e=1
while n>0:
    if n%k==0:
        ans+=tmp
        tmp=0
        e=1
    else:
        tmp+=e*(n%k)
        e*=10
    n//=k
ans+=tmp
e=1
while ans>0:
    ANS+=e*(ans%k)
    e*=10
    ans//=k
print(ANS)