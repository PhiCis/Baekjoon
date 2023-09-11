a=int(input())
n=10**(len(str(a))-1)
print(a//n*n if a-a//n*n<a//n*n+n-a else a//n*n+n)