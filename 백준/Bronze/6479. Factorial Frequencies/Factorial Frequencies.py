from math import *
while True:
    a=int(input())
    if a==0:
        break
    print(a, "! --", sep="")
    a=factorial(a)
    b=[0]*10
    while a>0:
        b[a%10]+=1
        a//=10
    for i in range(10):
        print("   ("+str(i)+")"+str(b[i]).rjust(5), end=" ")
        if i==4 or i==9:
            print()
    input()
