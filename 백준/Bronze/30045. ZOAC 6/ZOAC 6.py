ans = 0
n = int(input())
for i in range(n):
    a = input()
    if a.count("01")>=1 or a.count("OI")>=1:
        ans+=1
print(ans)