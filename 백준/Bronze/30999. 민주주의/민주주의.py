ans=0
n, m=map(int, input().split())
for i in range(n):
    if input().count('O') > m//2:
        ans+=1
print(ans)