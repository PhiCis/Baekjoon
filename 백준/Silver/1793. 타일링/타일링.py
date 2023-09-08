f = [0 for i in range(300)]
f[0] = 1
f[1] = 1
for i in range(2, 300):
    f[i] = f[i - 1] + 2 * f[i - 2]
while True:
    try:
        n=int(input())
        print(f[n])
    except EOFError:
        break
        