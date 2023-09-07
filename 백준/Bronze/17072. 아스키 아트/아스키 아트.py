n,m=map(int, input().split())
a=[]
for i in range(n):
    a.append(list(map(int, input().split())))
for i in range(n):
    for j in range(m):
        tmp=2126*a[i][j*3]+7152*a[i][j*3+1]+722*a[i][j*3+2]
        if tmp>=2040000:
            print(".", end="")
        elif tmp>=1530000:
            print("-", end="")
        elif tmp>=1020000:
            print("+", end="")
        elif tmp>=510000:
            print("o", end="")
        else:
            print("#", end="")
    print()
