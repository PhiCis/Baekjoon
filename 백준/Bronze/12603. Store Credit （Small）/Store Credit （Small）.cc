#include<bits/stdc++.h>
using namespace std;

int t, n, m, a[1010];

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	cin>>t;
	for(int i=1;i<=t;i++)
	{
		cin>>n>>m;
		for(int j=1;j<=m;j++)
		{
			cin>>a[j];
		}
		for(int j=1;j<=m;j++)
		{
			for(int k=j+1;k<=m;k++)
			{
				if(a[j]+a[k]==n)
				{
					cout<<"Case #"<<i<<": "<<j<<" "<<k<<"\n";
					goto skip;
				}
			}
		}
		skip:;
	}
}