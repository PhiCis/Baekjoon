#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
char a[1010], b[1010];
int dp[1010][1010];
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
	/*for(int i=1;i<=strlen(a);i++)
	{
		for(int j=1;j<=strlen(b);j++)
		{
			printf("%d ", dp[i][j]);
		}
		printf("\n");
	}*/
	printf("%d", dp[strlen(a)][strlen(b)]);
}