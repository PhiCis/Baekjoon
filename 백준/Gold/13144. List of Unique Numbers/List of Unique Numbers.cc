#include<bits/stdc++.h>
using namespace std;

int n, a[100010], c[100010];
long long ans;

int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	int s=1, e=1;
	c[a[1]]=1;
	ans=1;
	while(e<n)
	{
		e++;
		c[a[e]]++;
		while(c[a[e]]>1)
		{
			c[a[s]]--;
			s++;
		}
		ans+=e-s+1;
	}
	cout<<ans;
}