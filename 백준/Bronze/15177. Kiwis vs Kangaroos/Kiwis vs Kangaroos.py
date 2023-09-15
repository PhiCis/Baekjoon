a=input().lower()
A, B=0, 0
for i in "kangaroo":
	A+=a.count(i)
for i in "kiwibird":
	B+=a.count(i)
if A>B: print("Kangaroos")
elif A<B: print("Kiwis")
else: print("Feud continues")