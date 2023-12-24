#include<bits/stdc++.h>
using namespace std;

int n, m, a[1010];
string s;

int ans, ansi;
int main() 
{
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>s;
		s+="0";
		for(int j=1;j<=m;j++)
		{
			if(s[j-1]=='1' && s[j]=='0') a[i]++;
		}
	}
	for(int i=1;i<=n;i++)
	{
		ans=max(ans, a[i]);
	}
	for(int i=1;i<=n;i++)
	{
		if(a[i]==ans) ansi++;
	}
	cout<<ans<<" "<<ansi;
}