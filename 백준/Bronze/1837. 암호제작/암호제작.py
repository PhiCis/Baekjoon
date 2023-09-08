a, b = input().split()
a = int(a)
b = int(b)
flag = 0
for i in range(2, b):
    if a%i==0:
        flag = i
        break
if flag!=0:
    print("BAD %d"%flag)
else:
    print("GOOD")