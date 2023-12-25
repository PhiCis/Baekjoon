n=int(input())
for i in range(n):
    a=input()
    print(min(a.count('a'), a.count('b')))