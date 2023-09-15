#include<bits/stdc++.h>
using namespace std;

int n, m, k, a[110];

int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>m>>k;
		int x, y;
		for(int j=1;j<=m;j++)
		{
			cin>>a[j]; 
			if(a[j]==2) x=j, y=1;
			if(a[j]==3) x=j, y=-1;
		}
		int ans=0;
		for(int j=1;j<=k;j++)
		{
			if(x==m) y=-1;
			if(x==1) y=1;
			x+=y;
			if(a[x]==0) ans++;
		}
		cout<<ans<<"\n";
	}
}