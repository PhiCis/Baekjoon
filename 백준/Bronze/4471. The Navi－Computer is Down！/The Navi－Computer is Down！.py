n=int(input())
for i in range(n):
    s=input()
    a, b, c=map(float, input().split())
    t=input()
    d, e, f=map(float, input().split())
    print(s+" to "+t+": ", end="")
    print("%.2f"%round(((a-d)*(a-d)+(b-e)*(b-e)+(c-f)*(c-f))**0.5, 2))