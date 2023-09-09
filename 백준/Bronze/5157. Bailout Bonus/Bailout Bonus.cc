#include<bits/stdc++.h>
using namespace std;

int t, c, b, n, r;

int main()
{
	cin>>t;
	for(int i=1;i<=t;i++)
	{
		int ans = 0;
		cin>>c>>b>>n>>r;
		vector<int> chk(c+1, 0);
		for(int j=1;j<=b;j++)
		{
			int a;
			cin>>a;
			chk[a]=1;
		}
		for(int j=1;j<=n;j++)
		{
			int a, b;
			cin>>a>>b;
			if(chk[a]) ans+=b*r/100;
		}
		cout<<"Data Set "<<i<<":\n"<<ans<<"\n\n";
	}
}