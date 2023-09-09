#include<bits/stdc++.h>
using namespace std;

char s1[4040], s2[4040];
int len1, len2;
int dp[4040][4040];
int ans;
int main()
{
	scanf("%s", s1+1);
	scanf(" %s", s2+1);
	len1=strlen(s1+1);
	len2=strlen(s2+1);
	for(int i=1;i<=len1;i++)
	{
		for(int j=1;j<=len2;j++)
		{
			if(s1[i]!=s2[j]) dp[i][j]=0;
			else
			{
				dp[i][j]=dp[i-1][j-1]+1;
				if(ans<dp[i][j]) ans=dp[i][j];
			}
		}
	}
	printf("%d", ans);
}