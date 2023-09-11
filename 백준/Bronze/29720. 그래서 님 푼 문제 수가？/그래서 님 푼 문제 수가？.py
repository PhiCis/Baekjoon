a,b,c=map(int, input().split())
print(max(0, a-b*c), max(0, a-b*c+b-1))