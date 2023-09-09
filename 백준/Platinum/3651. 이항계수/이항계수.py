from math import *
from itertools import *
m=int(input())
ans=[]
ans.append((m, 1))
ans.append((m, m-1))
tmp=int(sqrt(m*2))
if tmp*tmp+tmp==m*2:
	ans.append((tmp+1, 2))
	ans.append((tmp+1, tmp-1))
for i in range(3, 27):
	tmp=factorial(i*2)//(factorial(i)**2)
	cnt=i*2
	while tmp<=m:
		if tmp==m:
			ans.append((cnt, i))
			ans.append((cnt, cnt-i))
		cnt+=1
		tmp=tmp*cnt//(cnt-i)

ans=list(set(ans))
ans.sort(key=lambda x : (x[0], x[1]))
print(len(ans))
for i in ans:
	print(i[0], i[1])