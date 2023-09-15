ans=0
while True:
	if input()=="TOTAL": break
	ans+=eval(input().replace(" ", "*"))
if int(input())<=ans: print("PAY")
else: print("PROTEST")