n=int(input())
for i in range(n):
	a=input()
	ans=""
	for j in a:
		if ord('0')<=ord(j)<=ord('9'): ans+=j
		elif ord('A')<=ord(j)<=ord('C'): ans+='2'
		elif ord('D')<=ord(j)<=ord('F'): ans+='3'
		elif ord('G')<=ord(j)<=ord('I'): ans+='4'
		elif ord('J')<=ord(j)<=ord('L'): ans+='5'
		elif ord('M')<=ord(j)<=ord('O'): ans+='6'
		elif ord('P')<=ord(j)<=ord('S'): ans+='7'
		elif ord('T')<=ord(j)<=ord('V'): ans+='8'
		elif ord('W')<=ord(j)<=ord('Z'): ans+='9'
		if len(ans)==3 or len(ans)==7: ans+='-'
		if len(ans)==12: break;
	print(ans)