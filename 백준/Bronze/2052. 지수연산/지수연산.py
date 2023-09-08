a=int(input())
ans=1
for i in range(0, a):
    ans*=5
print("0.", end='')
for i in range(0, a-len(str(ans))):
    print("0", end='')
print(ans)