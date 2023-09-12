h, k, v, s=map(int, input().split())
ans=0
while h>0:
	v+=s
	v-=max(1, v//10)
	if v>=k: h+=1
	elif 0<v<k:
		h-=1
		if h==0: v=0
	else: h, v=0, 0
	ans+=v
	if s>0: s-=1
print(ans)