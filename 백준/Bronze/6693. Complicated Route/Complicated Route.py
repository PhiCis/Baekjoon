from math import *
while True:
    s=input()
    if s=="END":
        break
    s=s.split(',')
    s[-1]=s[-1][:-1]
    #print(s)
    x, y=0.0, 0.0
    for a in s:
        if a[-2:]=="NE":
            x+=float(a[:-2])/sqrt(2)
            y+=float(a[:-2])/sqrt(2)
        elif a[-2:]=="SE":
            x+=float(a[:-2])/sqrt(2)
            y-=float(a[:-2])/sqrt(2)
        elif a[-2:]=="NW":
            x-=float(a[:-2])/sqrt(2)
            y+=float(a[:-2])/sqrt(2)
        elif a[-2:]=="SW":
            x-=float(a[:-2])/sqrt(2)
            y-=float(a[:-2])/sqrt(2)
        elif a[-1]=="N":
            y+=float(a[:-1])
        elif a[-1]=="E":
            x+=float(a[:-1])
        elif a[-1]=="S":
            y-=float(a[:-1])
        elif a[-1]=="W":
            x-=float(a[:-1])
    print("You can go to (%.3f,%.3f), the distance is %.3f steps."%(x, y, sqrt(x**2+y**2)))
        
        
        
