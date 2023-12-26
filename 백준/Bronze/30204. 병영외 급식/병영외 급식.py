n = int(input().split()[1])
if sum(map(int, input().split()))%n==0: print(1)
else: print(0)