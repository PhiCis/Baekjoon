#include<bits/stdc++.h>
using namespace std;

int n;
int a[11][11];
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
	for(int j=1;j<=n;j++)
	{
		int ans=1;
		int tmp=a[1][j];
		for(int i=2;i<=n;i++)
		{
			if(a[i][j]>tmp)
			{
				ans++;
				tmp=a[i][j];
			}
		}
		cout<<ans<<" ";
	}
	cout<<"\n";
	for(int i=1;i<=n;i++)
	{
		int ans=1;
		int tmp=a[i][1];
		for(int j=2;j<=n;j++)
		{
			if(a[i][j]>tmp)
			{
				ans++;
				tmp=a[i][j];
			}
		}
		cout<<ans<<"\n";
	}
}