a, b=input(), input()
if a[:2]=="AD": a=int(a[3:])
else: a=-int(a[:-3])+1
if b[:2]=="AD": b=int(b[3:])
else: b=-int(b[:-3])+1
print(abs(b-a))