a, b=map(int, input().split())
ANS=0
for i in range(b):
	c=input()
	ans=0
	for i in c:
		if ord('A')<=ord(i)<=ord('Z'): ans+=4;
		if ord('a')<=ord(i)<=ord('z'): ans+=2;
		if ord('0')<=ord(i)<=ord('9'): ans+=2;
		if i==' ': ans+=1;
	if ans<=a:
		ANS+=1
print(ANS)