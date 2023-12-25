#include<bits/stdc++.h>
using namespace std;

int a[5], b[5], d[10], e[10], n;
int main()
{
	for(int i=1;i<=4;i++)
	{
		scanf("%1d", &a[i]);
		d[a[i]]++;
	}
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		int ans=0;
		for(int j=1;j<=4;j++)
		{
			scanf("%1d", &b[j]);
			e[b[j]]++;
			if(a[j]==b[j]) ans++;
		}
		int tmp=0;
		for(int j=0;j<=9;j++)
		{
			tmp+=min(d[j], e[j]);
			e[j]=0;
		}
		cout<<tmp<<" "<<ans<<"\n";
	}
}