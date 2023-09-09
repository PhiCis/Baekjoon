#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
char a[1010], b[1010];
int dp[1010][1010];
char ans[1010];
int main()
{
	scanf("%s %s", a, b);
	for(int i=1;i<=strlen(a);i++)
	{
		for(int j=1;j<=strlen(b);j++)
		{
			if(a[i-1]==b[j-1]) dp[i][j]=dp[i-1][j-1]+1;
			else dp[i][j]=max(dp[i-1][j], dp[i][j-1]);
		}
	}
	printf("%d\n", dp[strlen(a)][strlen(b)]);
	
	int i=strlen(a), j=strlen(b);
	while(dp[i][j])
	{
		if(dp[i][j]!=dp[i-1][j]&&dp[i][j]!=dp[i][j-1])
		{
			ans[dp[i][j]]=a[i-1];
			i-=1;
			j-=1;
		}
		else if(dp[i][j]==dp[i-1][j]) i-=1;
		else if(dp[i][j]==dp[i][j-1]) j-=1;
	}
	for(int i=1;i<=dp[strlen(a)][strlen(b)];i++)
	{
		printf("%c", ans[i]);
	}
}