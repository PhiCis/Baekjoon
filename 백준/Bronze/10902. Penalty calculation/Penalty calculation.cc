#include<bits/stdc++.h>
using namespace std;

int n, t[110], s[110];
int ans;

int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>t[i]>>s[i];
		ans=max(ans, s[i]);
	}
	for(int i=1;i<=n;i++)
	{
		if(s[i]==ans)
		{
			if(ans==0)
			{
				cout<<0;
				return 0;
			}
			else
			{
				cout<<t[i]+(i-1)*20;
				return 0;
			}
		}
	}
}