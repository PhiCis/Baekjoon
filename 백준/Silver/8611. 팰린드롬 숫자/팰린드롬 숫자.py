n = int(input())
out = 0
for i in range(2, 11):
    a = ""
    tmp = n
    while tmp>0:
        a+=str(tmp%i)
        tmp//=i
    if a==a[::-1]:
        print(i, a)
        out += 1
        
if out == 0:
    print("NIE")