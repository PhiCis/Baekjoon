#include<bits/stdc++.h>
using namespace std;
#define int long long

int t;
int a, b;
string s;
main()
{
	cin>>t;
	for(int x=1;x<=t;x++)
	{
		cin>>s>>a>>b;
		int tmp=0;
		for(int i=0;i<s.size();i++) if(s[i]=='B') tmp++;
		a--;
		int ans=tmp*(b/s.size()-a/s.size());
		for(int i=0;i<b%s.size();i++) if(s[i]=='B') ans++;
		for(int i=0;i<a%s.size();i++) if(s[i]=='B') ans--;
		cout<<"Case #"<<x<<": "<<ans<<"\n";
	}
}