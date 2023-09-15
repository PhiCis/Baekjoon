A=input().split()
n=len(A)
if sum(map(lambda x: (1 if x.count('ae') else 0), A))*10>=4*n: print("dae ae ju traeligt va")
else: print("haer talar vi rikssvenska")
