#include<bits/stdc++.h>
using namespace std;

int n, a[100010];

int main()
{
	int ans=2e9;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		if(i>=2)
		{
			ans=min(ans, abs(a[i]-a[i-1]));
		}
	}
	cout<<ans;
}