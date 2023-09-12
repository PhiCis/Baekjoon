a=input()
b=""
for i in a:
	if i=="a" or i=="e" or i=="i" or i=="o" or i=="u":
		b+=i
if b==b[::-1]: print("S");
else: print("N");