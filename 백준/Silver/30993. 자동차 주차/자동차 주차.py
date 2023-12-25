f=[1]*20
for i in range(1, 20):
    f[i]=f[i-1]*i
a, b, c, d=map(int, input().split())
print(f[a]//f[b]//f[c]//f[d])