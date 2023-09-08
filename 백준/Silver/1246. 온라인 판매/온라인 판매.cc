#include<bits/stdc++.h>
using namespace std;

int n, m, a[1010];
int ans, ansi;

int main()
{
	cin>>n>>m;
	for(int i=1;i<=m;i++)
	{
		cin>>a[i];
	}
	sort(a+1, a+m+1);
	for(int i=1;i<=m;i++)
	{
		if(a[i]*min(n, m+1-i)>ans)
		{
			ans=a[i]*min(n, m+1-i);
			ansi=a[i];
		}
	}
	cout<<ansi<<" "<<ans;
}