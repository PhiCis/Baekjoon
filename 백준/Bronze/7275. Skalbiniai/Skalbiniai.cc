#include<bits/stdc++.h>
using namespace std;

int n, k, m, a[1010], b[1010][1010], c[1010];
int ANS;

int main()
{
	cin>>n>>k>>m;
	for(int i=1;i<=k;i++)
	{
		cin>>a[i];
		for(int j=1;j<=a[i];j++) cin>>b[i][j];
	}
	for(int i=1;i<=n;i++)
	{
		cin>>c[i];
	}
	for(int i=1;i<=k;i++)
	{
		int ans=0;
		for(int j=1;j<=a[i];j++) ans+=c[b[i][j]];
		ANS+=(ans+m-1)/m;
	}
	cout<<ANS;
}