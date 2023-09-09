#include<bits/stdc++.h>
using namespace std;

int t, n;

int main()
{
	cin>>t;
	for(int i=1;i<=t;i++)
	{
		int ans=0;
		cin>>n;
		for(int i=1;i<=n;i++)
		{
			string s;
			cin>>s;
			if(s=="sheep") ans++;
		}
		cout<<"Case "<<i<<": This list contains "<<ans<<" sheep.\n\n";
	}
}