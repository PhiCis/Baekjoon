#include<bits/stdc++.h>
using namespace std;

int n, a[30], b[30];
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=n;i++)
	{
		cin>>b[i];
	}
	sort(a+1, a+n+1);
	sort(b+1, b+n+1);
	long long ans=1;
	for(int i=n;i>=1;i--)
	{
		int j;
		for(j=n;j>=1;j--)
		{
			if(b[j]<a[i])
			{
				break;
			}
		}
		ans*=n-j-(n-i);
	}
	cout<<ans;
}