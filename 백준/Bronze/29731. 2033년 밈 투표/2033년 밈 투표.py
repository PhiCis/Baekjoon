a=["Never gonna give you up",
"Never gonna let you down",
"Never gonna run around and desert you",
"Never gonna make you cry",
"Never gonna say goodbye",
"Never gonna tell a lie and hurt you",
"Never gonna stop"]
n=int(input())
for i in range(n):
	b=input()
	flag=False
	for j in a:
		if j==b:
			flag=True
	if flag == False:
		print("Yes")
		exit(0)
print("No")