a, b=input().split()
a = int(a)
b = int(b)
b%=4
a%=10
print((a**(b+4))%10)