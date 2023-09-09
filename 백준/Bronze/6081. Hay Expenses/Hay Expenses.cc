#include<bits/stdc++.h>
using namespace std;

int a[1010], s[1010];
int n, k, c, d;

int main()
{
	cin>>n>>k;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		s[i]=s[i-1]+a[i];
	}
	for(int i=1;i<=k;i++)
	{
		cin>>c>>d;
		cout<<s[d]-s[c-1]<<"\n";
	}
}