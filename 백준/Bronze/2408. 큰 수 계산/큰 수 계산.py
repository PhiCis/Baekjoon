a = int(input())
ans = 0
chk = 0
tmp = int(input())
for i in range(1, a):
 b = input()
 c = int(input())
 if b == '+':
  if chk == 0:
   ans += tmp
  else:
   ans -= tmp
  chk = 0
  tmp = c
 if b == '-':
  if chk == 0:
   ans += tmp
  else:
   ans -= tmp
  chk = 1
  tmp = c
 if b == '*':
  tmp *= c
 if b == '/':
  tmp //= c
if chk == 0:
 ans += tmp
else:
 ans -= tmp
print(ans)