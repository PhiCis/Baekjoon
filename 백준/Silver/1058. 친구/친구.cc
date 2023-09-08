#include<bits/stdc++.h>
using namespace std;

int n, a[60][60], ans[60], ANS;

int main()
{
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			char c;
			scanf(" %c", &c);
			a[i][j] = (c=='N')?0:1;
			if(i==j) a[i][j]=-1;
		}
	}
	for(int k=1;k<=n;k++)
	{
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
			{
				if(a[i][k]==1&&a[k][j]==1&&a[i][j]==0) a[i][j]=2;
			}
		}
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(a[i][j]>0) ans[i]++;
		}
		ANS = max(ANS, ans[i]);
	}
	printf("%d", ANS);
}