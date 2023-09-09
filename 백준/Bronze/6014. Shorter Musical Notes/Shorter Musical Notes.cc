#include<bits/stdc++.h>
using namespace std;

int n, q, a[1200020], c, s;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(0);
	cin>>n>>q;
	for(int i=1;i<=n;i++)
	{
		cin>>c;
		for(int j=s;j<s+c;j++) a[j]=i;
		s+=c;
	}
	while(q--)
	{
		cin>>c;
		cout<<a[c]<<"\n";
	}
}