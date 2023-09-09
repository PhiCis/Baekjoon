a = int(input())
ans = 1
ANS = 0
for i in range(1, a + 1):
    ans *= i
while ans > 0:
    if ans % 10 == 0:
        ANS += 1
    ans //= 10
print(ANS)