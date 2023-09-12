#include<bits/stdc++.h>
using namespace std;

int n, m;
int a[100];
int ans;

int main()
{
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			a[i+j]++;
		}
	}
	for(int i=0;i<100;i++) ans=max(ans, a[i]);
	for(int i=0;i<100;i++) if(a[i]==ans) cout<<i<<"\n";
}