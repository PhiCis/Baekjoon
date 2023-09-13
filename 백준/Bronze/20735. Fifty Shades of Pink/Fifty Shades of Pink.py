n=int(input())
ans=0
for i in range(n):
	a=input()
	if a.lower().count('pink')+a.lower().count('rose')>0: ans+=1
if ans>0: print(ans)
else: print("I must watch Star Wars with my daughter")