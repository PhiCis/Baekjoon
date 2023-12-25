#include<bits/stdc++.h>
using namespace std;

int t, n, a[110], b[110], c[101][201][201];
int main()
{
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(int i=0;i<=n;i++)
		{
			for(int j=0;j<=200;j++)
			{
				for(int k=0;k<=200;k++)
				{
					c[i][j][k]=0;
				}
			}
		}
		c[0][0][0]=1;
		for(int i=1;i<=n;i++)
		{
			cin>>a[i]>>b[i];
			for(int j=0;j<=200;j++)
			{
				for(int k=0;k<=200;k++)
				{
					if(j-a[i]>=0) c[i][j][k]=c[i-1][j-a[i]][k];
					if(k-b[i]>=0) c[i][j][k]=max(c[i][j][k], c[i-1][j][k-b[i]]);
				}
			}
		}
		for(int j=0;j<=200;j++)
		{
			for(int k=0;k<=j;k++)
			{
				if(c[n][j][k])
				{
					cout<<j<<"\n";
					goto skip;
				}
			}
		}
		skip:;
	}
}