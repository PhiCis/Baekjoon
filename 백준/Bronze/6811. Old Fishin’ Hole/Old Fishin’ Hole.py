a, b, c, d=int(input()), int(input()), int(input()), int(input())
ans=0
for i in range(101):
	for j in range(101):
		for k in range(101):
			if i==j==k==0:
				continue
			if i*a+j*b+k*c<=d:
				print(str(i)+" Brown Trout, "+str(j)+" Northern Pike, "+str(k)+" Yellow Pickerel")
				ans+=1;
print("Number of ways to catch fish: "+str(ans))