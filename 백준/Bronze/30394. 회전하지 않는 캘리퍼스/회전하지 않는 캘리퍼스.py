n=int(input())
a=[]
for i in range(n):
    a.append(int(input().split()[-1]))
print(max(a)-min(a))