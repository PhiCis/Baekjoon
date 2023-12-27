a, b=map(float, input().split())
if b >= 2*a:
    print(0, -a)
    print(0, a)
else:
    print(-b/2, (a*a-b*b/4)**0.5)
    print(b/2, (a*a-b*b/4)**0.5)