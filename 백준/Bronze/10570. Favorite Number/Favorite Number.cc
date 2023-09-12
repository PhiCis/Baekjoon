#include<bits/stdc++.h>
using namespace std;

int t, n, a[1010];

int main()
{
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(int i=1;i<=1000;i++) a[i]=0;
		for(int i=1;i<=n;i++)
		{
			int c;
			cin>>c;
			a[c]++;
		}
		int ans=0;
		for(int i=1;i<=1000;i++) if(a[i]>ans) ans=a[i];
		for(int i=1;i<=1000;i++)
		{
			if(a[i]==ans)
			{
				cout<<i<<"\n";
				goto skip;
			}
		}
		skip:;
	}
}