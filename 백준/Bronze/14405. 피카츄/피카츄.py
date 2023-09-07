s=input()
while s!="":
    if s[:2]=="pi" or s[:2]=="ka":
        s=s[2:]
    elif s[:3]=="chu":
        s=s[3:]
    else:
        break
if s=="":
    print("YES")
else:
    print("NO")
        
