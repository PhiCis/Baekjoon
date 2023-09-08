#include<bits/stdc++.h>
using namespace std;

int a[100][100];
int ans;

int main()
{
	int n, m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			int c;
			cin>>c;
			a[c][i]=j;
		}
	}
	for(int i=1;i<=m;i++)
	{
		for(int j=i+1;j<=m;j++)
		{
			for(int k=2;k<=n;k++)
			{
				if((a[i][k]>a[j][k])==(a[i][1]>a[j][1])) continue;
				else goto skip;
			}
//			cout<<i<<j<<"\n";
			ans++;
			skip:;
		}
	}
	cout<<ans;
}