n=int(input())
if str(n).count('7')>=1:
    if n%7==0: print(3)
    else: print(2)
else:
    if n%7==0: print(1)
    else: print(0)