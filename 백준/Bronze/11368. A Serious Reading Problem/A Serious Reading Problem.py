while True:
    a, b, c, d = map(int, input().split())
    if a==0:
        break
    print(a**(b*c*d))