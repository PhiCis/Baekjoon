#include<bits/stdc++.h>
using namespace std;

int n, a[110];
int ans;

int main()
{
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++)
	{
		for(int j=i;j<=n;j++)
		{
			int cnt=0;
			for(int k=i;k<=j;k++) cnt+=a[k];
			for(int k=i;k<=j;k++)
			{
				if(cnt==a[k]*(j-i+1))
				{
					ans++;
					break;
				}
			}
		}
	}
	cout<<ans;
}