#include<bits/stdc++.h>
using namespace std;

int n, m, k, a[110];

int main()
{
	while(1)
	{
		cin>>n>>m>>k;
		for(int i=1;i<=100;i++) a[i]=0;
		if(n+m+k==0) return 0;
		for(int i=1;i<=n;i++) for(int j=1;j<=m;j++)
		{
			int c;
			cin>>c;
			a[c]++;
		}
		int ans=2e9;
		for(int i=1;i<=k;i++) ans=min(ans, a[i]);
		for(int i=1;i<=k;i++) if(ans==a[i]) cout<<i<<" ";
		cout<<"\n";
	}
}