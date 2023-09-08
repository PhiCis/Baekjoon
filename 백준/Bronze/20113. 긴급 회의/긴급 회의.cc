#include<bits/stdc++.h>
using namespace std;

int a[110];
int ans, cnt;

int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		int c;
		cin>>c;
		a[c]++;
	}
	for(int i=1;i<=n;i++)
	{
		ans=max(ans, a[i]);
	}
	for(int i=1;i<=n;i++)
	{
		if(ans==a[i]) cnt++;
	}
	if(cnt>=2) cout<<"skipped";
	else
	{
		for(int i=1;i<=n;i++)
		{
			if(ans==a[i]) cout<<i;
		}
	}
}