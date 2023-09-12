n=int(input())
A=list(map(int, input().split()))
m=max(A)
for i in range(n):
    if A[i]==m:
        print(chr(65+i),end="")