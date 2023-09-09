#include<bits/stdc++.h>
using namespace std;
#define int long long

int a, b, c, d, e, n, s, t;

main()
{
	while(1)
	{
		cin>>a>>b>>c>>d>>e>>n;
		int tmp=a*(b*c+2*c*d+2*d*b);
		if(!a) return 0;
		for(int i=1;i<=n;i++)
		{
			cin>>s>>t;
			tmp-=a*s*t;
		}
		if(tmp%e==0) cout<<tmp/e<<"\n";
		else cout<<tmp/e+1<<"\n";
	}
}