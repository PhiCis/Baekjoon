#include<bits/stdc++.h>
using namespace std;

int n, m, k, a[100], c[100], b[100][100], ans;

int main()
{
	cin>>n>>m;
	cin>>k;
	for(int i=1;i<=k;i++)
	{
		int tmp;
		cin>>tmp;
		a[tmp]=1;
	}
	for(int i=1;i<=m;i++)
	{
		cin>>c[i];
		for(int j=1;j<=c[i];j++)
		{
			cin>>b[i][j];
		}
	}
	for(int x=1;x<=50;x++)
	{
		for(int i=1;i<=m;i++)
		{
			bool flag=false;
			for(int j=1;j<=c[i];j++)
			{
				if(a[b[i][j]]) flag=true;
			}
			if(flag)
			{
				for(int j=1;j<=c[i];j++)
				{
					a[b[i][j]]=1;
				}
			}
		}
	}
	for(int i=1;i<=m;i++)
	{
		bool flag=false;
		for(int j=1;j<=c[i];j++)
		{
			if(a[b[i][j]]) flag=true;
		}
		if(!flag) ans++;
	}
	cout<<ans;
}