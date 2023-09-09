ans=0
a=input()
n=int(input())
for _ in range(n):
    b=input()
    if (b+b).find(a) != -1:
        ans += 1
print(ans)