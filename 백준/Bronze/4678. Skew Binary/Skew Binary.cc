#include<bits/stdc++.h>
using namespace std;


int main()
{
	string s;
	while(cin>>s)
	{
		if(s=="0") return 0;
		long long ans=0, e=1;
		for(int i=0;i<s.size();i++)
		{
			ans+=(s[s.size()-1-i]-'0')*e;
			e=e*2+1;
		}
		cout<<ans<<"\n";
	}
}