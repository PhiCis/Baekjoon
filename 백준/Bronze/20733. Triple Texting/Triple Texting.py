a=input()
n=len(a)//3
a,b,c=a[:n], a[n:2*n], a[2*n:]
if a==b: print(a);
elif a==c: print(a);
elif b==c: print(b);