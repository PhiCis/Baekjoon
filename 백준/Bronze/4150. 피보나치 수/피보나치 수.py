a=int(input())
if a==1 or a==2:
    print("1")
else:
    b=1
    c=1
    for i in range(2, a):
        (b, c)=(b+c, b)
    print(b)
        
    