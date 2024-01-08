#include<bits/stdc++.h>
using namespace std;

int t, n, a[13];
int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(0);
	cin>>t;
	for(int z=1;z<=t;z++)
	{
		cout<<"Case #"<<z<<": ";
		cin>>n;
		int ans=0;
		pair<int, int> ansi={0, 0};
		for(int i=1;i<=12;i++) cin>>a[i];
		for(int i=1;i<=11;i++)
		{
			for(int j=i+1;j<=12;j++)
			{
				if(n/a[i]*(a[j]-a[i])<=0) continue;
				if(n/a[i]*(a[j]-a[i])>ans)
				{
					ans=n/a[i]*(a[j]-a[i]);
					ansi={i, j};
				}
				else if(n/a[i]*(a[j]-a[i])==ans && a[ansi.first]>a[i])
				{
					ansi={i, j};
				}
			}
		}
		if(ansi==pair<int,int>{0, 0}) cout<<"IMPOSSIBLE\n";
		else cout<<ansi.first<<" "<<ansi.second<<" "<<ans<<"\n";
	}
}