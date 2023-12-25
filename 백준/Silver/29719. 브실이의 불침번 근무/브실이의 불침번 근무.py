a, b=map(int, input().split())
print((pow(b, a, 1000000007)-pow(b-1, a, 1000000007)+1000000007)%1000000007)