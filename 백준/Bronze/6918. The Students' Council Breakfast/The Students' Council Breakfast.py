a,b,c,d,e=int(input()),int(input()),int(input()),int(input()),int(input())
ans=0
ansi=10**10
for i in range(e//a+1):
	for j in range((e-i*a)//b+1):
		for k in range((e-i*a-j*b)//c+1):
			if (e-i*a-j*b-k*c)%d==0:
				ans+=1
				ansi=min(ansi, i+j+k+(e-i*a-j*b-k*c)//d)
				print("# of PINK is %d # of GREEN is %d # of RED is %d # of ORANGE is %d"%(i,j,k,(e-i*a-j*b-k*c)//d))
print("Total combinations is %d."%ans)
print("Minimum number of tickets to print is %d."%ansi)