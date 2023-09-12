n = int(input())
for i in range(n):
    k = int(input())
    a = 0
    b = 1
    cnt = 2
    while True:
        a, b = b, a + b
        if b == k:
            print(cnt)
            break
        cnt += 1