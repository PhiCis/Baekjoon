#include<bits/stdc++.h>
using namespace std;

int n, a, b;

int main()
{
	while(cin>>n)
	{
		if(!n) return 0;
		int ans=0;
		for(int i=1;i<=n;i++)
		{
			cin>>a>>b;
			ans+=b/2;
		}
		cout<<ans/2<<"\n";
	}
}