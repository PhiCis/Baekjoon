#include<bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007

int n;
string s;

main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		int ans=1;
		cin>>s;
		for(int i=0;i<s.size();)
		{
			if(s[i]=='?')
			{
				int tmp=i;
				while(i<s.size()&&s[i]=='?') i++;
				if(tmp==0||i==s.size()||s[tmp-1]==s[i]) continue;
				else ans*=(i-tmp+1);
			}
			else
			{
				i++;
			}
			ans%=mod;
		}
		cout<<ans<<"\n";
	}
}