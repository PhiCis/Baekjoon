#include<bits/stdc++.h>
using namespace std;

int n, a[110], b[110];
int ans;

int main()
{
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i]>>b[i];
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			for(int k=1;k<=n;k++)
			{
				if(a[i]==a[j]&&b[i]==b[k]) ans=max(ans, abs(b[i]-b[j])*abs(a[i]-a[k]));
			}
		}
	}
	cout<<ans;
}