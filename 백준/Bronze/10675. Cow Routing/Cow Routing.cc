#include<bits/stdc++.h>
using namespace std;
int ans=2e9;

int main()
{
	int a, b, n;
	cin>>a>>b>>n;
	for(int i=1;i<=n;i++)
	{
		int c, k;
		cin>>c>>k;
		int flag=0;
		for(int j=1;j<=k;j++)
		{
			int d;
			cin>>d;
			if(d==a&&flag==0)
			{
				flag=1;
			}
			if(d==b&&flag==1)
			{
				flag=2;
			}
		}
		if(flag==2) ans=min(ans, c);
	}
	if(ans==2e9) cout<<-1;
	else cout<<ans;
}