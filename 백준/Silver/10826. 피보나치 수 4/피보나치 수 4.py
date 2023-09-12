n=input();n=eval(n)
if n==0:
    print(0);
else:
    a0=0;a1=1;a2=1;
    for i in range(1,n):
        t0=a1
        t1=a2
        t2=a1+a2
        a0=t0;a1=t1;a2=t2;
    print(a1)