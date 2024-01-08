#include<bits/stdc++.h>
using namespace std;

int n;
char a[11][11];
int ans;

int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cin>>a[i][j];
		}
	}
	for(int k=2*n;k>=2;k--)
	{
		for(int i=1;i<=n;i++)
		{
			int j=k-i;
			if(j<1||j>n) continue;
			if(a[i][j]=='1')
			{
				for(int x=1;x<=i;x++)
				{
					for(int y=1;y<=j;y++)
					{
						if(a[x][y]=='1') a[x][y]='0';
						else a[x][y]='1';
					}
				}
				ans++;
			}
		}
	}
	cout<<ans;
}