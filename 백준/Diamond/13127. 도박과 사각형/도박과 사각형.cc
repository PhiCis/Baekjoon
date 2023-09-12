#include<bits/stdc++.h>
using namespace std;


double ans;
int n;
double a[1010][1010], s[1010][1010][6], ss[1010][1010][6];

int main()
{
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			scanf("%lf", &a[i][j]);
			for(int k=1;k<=5;k++)
			{
				s[i][j][k]=(a[i][j]==k?1:0)+s[i-1][j][k]+s[i][j-1][k]-s[i-1][j-1][k];
				ss[i][j][k]=s[i][j][k]+ss[i-1][j][k]+ss[i][j-1][k]-ss[i-1][j-1][k];
			}
		}
	}
	for(int k=1;k<=5;k++)
	{
		double tmp=0;
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
			{
				tmp+=s[i][j][k]*(ss[n][n][k]-(ss[i][n][k]-ss[i-1][n][k]+ss[n][j][k]-ss[n][j-1][k])*(n+1)+s[i][j][k]*(n+1)*(n+1));
			}
		}
		ans+=k*tmp;
	}
	printf("%.10lf", ans*4/n/n/(n+1)/(n+1));
}