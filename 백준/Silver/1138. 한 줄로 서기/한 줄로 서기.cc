#include<bits/stdc++.h>
using namespace std;

int ans[11];

int main()
{
	int n, a;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a;
		int cnt=0;
		for(int j=1;j<=n;j++)
		{
			if(ans[j]==0) cnt++;
			if(ans[j]==0&&cnt==a+1)
			{
				ans[j]=i;
				break;
			}
		}
	}
	for(int i=1;i<=n;i++)
	{
		cout<<ans[i]<<" ";
	}
}