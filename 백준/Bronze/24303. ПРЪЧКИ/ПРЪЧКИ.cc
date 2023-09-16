#include<bits/stdc++.h>
using namespace std;

int ans=2e9;

int main()
{
	int a, b, c, d, e, f, g;
	cin>>a>>b>>c>>d>>e>>f>>g;
	for(int i=0;i<=d;i++)
	{
		for(int j=0;j<=e;j++)
		{
			for(int k=0;k<=f;k++)
			{
				if(i*a+j*b+k*c>=g) ans=min(ans, i+j+k);
			}
		}
	}
	if(ans!=2e9) cout<<ans;
	else cout<<0;
}