#include<bits/stdc++.h>
using namespace std;

int t;

int main()
{
	cin>>t;
	for(int z=1;z<=t;z++)
	{
		int n;
		string s, t="";
		int ans=0;
		cin>>n;
		getline(cin, s);
		for(int i=0;i<n;i++)
		{
			getline(cin, s);
			if(t>=s) ans++;
			t=max(t, s);
		}
		cout<<"Case #"<<z<<": "<<ans<<"\n";
	}
}