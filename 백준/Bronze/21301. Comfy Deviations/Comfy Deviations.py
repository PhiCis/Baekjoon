A=list(map(float, input().split()))
M=sum(A)/len(A)
A=list(map(lambda x:(x-M)**2, A))
print("COMFY" if sum(A)<=9 else "NOT COMFY")