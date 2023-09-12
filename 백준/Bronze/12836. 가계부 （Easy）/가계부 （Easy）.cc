#include<bits/stdc++.h>
using namespace std;

long long a[10010], c, d, e;
int n, q;
int main()
{
	cin>>n>>q;
	while(q--)
	{
		cin>>c;
		if(c==1)
		{
			cin>>d>>e;
			a[d]+=e;
		}
		else
		{
			cin>>d>>e;
			long long ans = 0;
			for(int i=d;i<=e;i++)
			{
				ans+=a[i];
			}
			cout<<ans<<"\n";
		}
	}
}