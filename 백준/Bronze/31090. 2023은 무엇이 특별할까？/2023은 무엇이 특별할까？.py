n = int(input())
for i in range(n):
    a = int(input())
    if (a+1)%(a%100)==0: print("Good")
    else: print("Bye")