g = [[] for row in range(1010)]
dp = [[0 for col in range(2)] for row in range(1010)]
ans = [[0 for col in range(2)] for row in range(1010)]

def f(now):
    
	if len(g[now])==0:
		ans[now][0]=1
		return
	
	for i in range(len(g[now])):
		f(g[now][i])
	
	dp[now][0]=0
	ans[now][0]=1
	
	for i in range(len(g[now])):
		
		if dp[g[now][i]][0]>dp[g[now][i]][1]:
			dp[now][0]+=dp[g[now][i]][0]
			ans[now][0]*=ans[g[now][i]][0]
# 			assert(ans[g[now][i]][0]>0)

		elif dp[g[now][i]][0]<dp[g[now][i]][1]:
			dp[now][0]+=dp[g[now][i]][1]
			ans[now][0]*=ans[g[now][i]][1]
# 			assert(ans[g[now][i]][1]>0)

		else:
			dp[now][0]+=dp[g[now][i]][0]
			ans[now][0]*=(ans[g[now][i]][0]+ans[g[now][i]][1])
# 			assert(ans[g[now][i]][0]+ans[g[now][i]][1]>0)

	dp[now][1]=0
	ans[now][1]=1
	
	for i in range(len(g[now])):
		DP = dp[now][0]
		ANS = ans[now][0]
		
		if dp[g[now][i]][0]>dp[g[now][i]][1]:
			DP-=dp[g[now][i]][0]
			ANS//=ans[g[now][i]][0]
# 			assert(ans[g[now][i]][0]>0);

		elif dp[g[now][i]][0]<dp[g[now][i]][1]:
			DP-=dp[g[now][i]][1]
			ANS//=ans[g[now][i]][1]
# 			assert(ans[g[now][i]][1]>0);

		else:
			DP-=dp[g[now][i]][0]
			ANS//=(ans[g[now][i]][0]+ans[g[now][i]][1])
		
		DP+=dp[g[now][i]][0]+1
		ANS*=ans[g[now][i]][0]
		if DP > dp[now][1]:
			dp[now][1] = DP
			ans[now][1] = ANS

		elif DP == dp[now][1]:
			ans[now][1]+=ANS


n = int(input())

for i in range(n):
    l = list(map(int, input().split()))
    
    for j in range(2, len(l)):
        g[l[0]].append(l[j])
    
    
f(1)

if dp[1][0]>dp[1][1]:
    print(dp[1][0])
    print(ans[1][0])
elif dp[1][0]<dp[1][1]:
    print(dp[1][1])
    print(ans[1][1])
else:
    print(dp[1][0])
    print(ans[1][0]+ans[1][1])
