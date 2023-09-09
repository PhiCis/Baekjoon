#include<bits/stdc++.h>
using namespace std;

int n, m, a[20020];

int main()
{
	while(1)
	{
		cin>>n>>m;
		if(n+m==0) return 0;
		for(int i=1;i<=10000;i++) a[i]=0;
		for(int i=1;i<=m;i++)
		{
			int c;
			cin>>c;
			a[c]++;
		}
		int ans=0;
		for(int i=1;i<=n;i++) if(a[i]>=2) ans++;
		cout<<ans<<"\n";
	}
}