#include<bits/stdc++.h>
using namespace std;

int n, a, c[15001], ans;

int main()
{
	for(int i=1;i<=15000;i++) c[i]=1;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a;
		c[a]=0;
	}
	for(int i=1;i<=15000;i++) if(c[i]) ans++;
	cout<<ans;
}