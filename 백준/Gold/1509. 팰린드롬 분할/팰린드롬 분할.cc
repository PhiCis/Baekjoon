#include<bits/stdc++.h>
using namespace std;

char s[2510];
int len;
bool pal[2510][2510];
int dp[2510];
int main()
{
	scanf("%s", s+1);
	len=strlen(s+1);
	for(int i=1;i<=len;i++)
	{
		for(int j=1;j+i-1<=len;j++)
		{
			if(i==1) pal[j][j+i-1]=true;
			else if(i==2) pal[j][j+i-1]=(s[j]==s[j+i-1]);
			else pal[j][j+i-1]=((s[j]==s[j+i-1])&&pal[j+1][j+i-2]);
		}
	}
	for(int i=1;i<=len;i++)
	{
		dp[i]=dp[i-1]+1;
		for(int j=1;j<i;j++)
		{
			if(pal[j][i]) dp[i]=min(dp[i], dp[j-1]+1);
		}
	}
	printf("%d", dp[len]);
}