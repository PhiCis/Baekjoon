#include<bits/stdc++.h>
using namespace std;

char a[110], b[110], c[110];
int dp[110][110][110];
int lena, lenb, lenc;
int main()
{
	scanf(" %s", a+1);
	scanf(" %s", b+1);
	scanf(" %s", c+1);
	lena=strlen(a+1);
	lenb=strlen(b+1);
	lenc=strlen(c+1);
	for(int i=1;i<=lena;i++)
	{
		for(int j=1;j<=lenb;j++)
		{
			for(int k=1;k<=lenc;k++)
			{
				if(a[i]==b[j]&&b[j]==c[k])
				{
					dp[i][j][k]=dp[i-1][j-1][k-1]+1;
				}
				else
				{
					dp[i][j][k]=max(dp[i-1][j][k], max(dp[i][j-1][k], dp[i][j][k-1]));
				}
			}
		}
	}
	printf("%d", dp[lena][lenb][lenc]);
}