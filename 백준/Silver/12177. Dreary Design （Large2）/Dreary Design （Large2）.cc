#include<bits/stdc++.h>
using namespace std;
#define int long long

int n, x, y;

main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>x>>y;
		cout<<"Case #"<<i<<": ";
		int ans=0;
		int tmp=y;
		ans+=(x-y)*(1*1+3*(tmp+tmp)+6*(tmp*(tmp-1)/2));
		for(int i=x-y;i<=x;i++)
		{
			tmp=x-i;
			ans+=1*1+3*(tmp+tmp)+6*(tmp*(tmp-1)/2);
		}
		cout<<ans<<"\n";
	}
}