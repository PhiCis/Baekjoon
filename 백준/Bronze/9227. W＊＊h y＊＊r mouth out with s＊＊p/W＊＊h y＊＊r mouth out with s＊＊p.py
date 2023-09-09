v=[]
while True:
    s = input()
    if s=="##":
        break
    v.append(s)
while True:
    s = input()
    if s=="#":
        break
    for i in range(3, len(s)):
        for j in v:
            if s[i-3]==j[0] and s[i]==j[1]:
                s=s[:i-2]+'**'+s[i:]
                break
    print(s)