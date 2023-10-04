n=int(input())
for i in range(n):
    m=int(input())
    m*=10**30
    tmp=0
    for j in range(100, -1, -1):
        for k in range(0, 10):
            if (tmp+k*10**j)**3<=m<(tmp+(k+1)*10**j)**3:
                tmp+=k*10**j
                break
    print(str(tmp)[:-10]+"."+str(tmp)[-10:])
