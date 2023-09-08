#include<bits/stdc++.h>
using namespace std;

int n, m, a[100010];
int ans=2e9;

int main()
{
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	sort(a+1, a+1+n);
	int s=1, e=1;
	while(1)
	{
		if(a[e]-a[s]<m) e++;
		else
		{
			ans=min(ans, a[e]-a[s]);
			s++;
		}
		if(e>n||s>n) break;
	}
	cout<<ans;
}