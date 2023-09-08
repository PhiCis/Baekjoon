n=int(input())
if n<=1:
    print(1)
else:
    q,t,x=0,0,0
    a=[]
    while n>0:
        a.append(n%5)
        n//=5
    for i in range(len(a)-1, 0, -1):
        q+=a[i]
        x+=q
        if a[i]%2==0:
            t+=a[i]
    if a[0]%2==0:
        t+=a[0]
    z=(x+t//2)%4
    if z==0:
        print(6)
    else:
        print(2**z)
    