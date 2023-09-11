a, b=map(int, input().split())
c, d=map(int, input().split())
A=(a-1)//8*d+a
B=(b-1)//8*(2*c+d)+c+b
#print(A, B)
if A<B:
	print("Zip\n"+str(A))
else:
	print("Dok\n"+str(B))