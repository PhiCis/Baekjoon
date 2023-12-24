#include<bits/stdc++.h>
using namespace std;

int n, m, a, ans;

int main()
{
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a;
		ans+=a/m;
	}
	cout<<ans;
}