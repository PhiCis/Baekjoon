ans=0
while True:
    try:
        a = input()
        for i in range(3, len(a)):
            if a[i-3]=='j' and a[i-2]=='o' and a[i-1]=='k' and a[i]=='e':
                ans+=1
    except EOFError:
        print(ans)
        break
    