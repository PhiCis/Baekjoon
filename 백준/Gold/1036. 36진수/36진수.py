def f(n):
    if n == 0:
        return
    f(n // 36)
    if n % 36 <= 9:
        print(n%36, end="")
    else:
        print(chr(n%36 - 10 + ord('A')), end="")

n = int(input())
a = [""] * n
s = 0
d = [0] * 36
for i in range(n):
    a[i] = input()
    for j in range(len(a[i])):
        if a[i][j] <= '9':
            s += (ord(a[i][j])-ord('0')) * (36 ** (len(a[i])-1-j)) 
            d[ord(a[i][j])-ord('0')] += (35-(ord(a[i][j])-ord('0'))) * (36 ** (len(a[i])-1-j)) 
        else:
            s += (ord(a[i][j])-ord('A')+10) * (36 ** (len(a[i])-1-j)) 
            d[ord(a[i][j])-ord('A')+10] += (35-(ord(a[i][j])-ord('A')+10)) * (36 ** (len(a[i])-1-j)) 
k = int(input())
d.sort()
for i in range(35, 35-k, -1):
    s += d[i]
    # print(s)
if s == 0:
    print(0)
else:
    f(s)
