#include<bits/stdc++.h>
using namespace std;

int n, a, b;
int ans;
int c[1010][1010];
int d[4][2]={1, 0, 0, 1, -1, 0, 0, -1};

int main()
{
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d%d", &a, &b);
		for(int j=a;j<a+10;j++)
		{
			for(int k=b;k<b+10;k++)
			{
				c[j][k]=1;
			}
		}
	}
	for(int i=1;i<=110;i++)
	{
		for(int j=1;j<=110;j++)
		{
			if(c[i][j])
			for(int k=0;k<4;k++)
			{
				if(!c[i+d[k][0]][j+d[k][1]]) ans++;
			}
		}
	}
	printf("%d", ans);
}