#include<bits/stdc++.h>
using namespace std;

int n;
pair<int, int> v[1010];
pair<int, int> w[1010];
int a[1010][1010], s[1010][1010];
int ans=2e9;

int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>v[i].first>>v[i].second;
	}
	sort(v+1, v+n+1);
	for(int i=1;i<=n;i++)
	{
		w[i].first=v[i].second;
		if(v[i].first==v[i-1].first)
		{
			w[i].second=w[i-1].second;
		}
		else
		{
			w[i].second=i;
		}
	}
	sort(w+1, w+n+1);
	for(int i=1;i<=n;i++)
	{
		v[i].first=w[i].second;
		if(w[i].first==w[i-1].first)
		{
			v[i].second=v[i-1].second;
		}
		else
		{
			v[i].second=i;
		}
	}
//	for(int i=1;i<=n;i++)
//	{
//		cout<<v[i].first<<v[i].second<<"\n";
//	}
	for(int i=1;i<=n;i++)
	{
		a[v[i].first][v[i].second]=1;
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			s[i][j]=s[i][j-1]+s[i-1][j]-s[i-1][j-1]+a[i][j];
		}
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			int tmp1 = s[i][j];
			int tmp2 = s[n][n]-s[i][n]-s[n][j]+s[i][j];
			int tmp3 = s[i][n]-s[i][j];
			int tmp4 = s[n][j]-s[i][j];
			ans = min({ans, max({tmp1, tmp2, tmp3, tmp4})});
		}
	}
	cout<<ans;
}