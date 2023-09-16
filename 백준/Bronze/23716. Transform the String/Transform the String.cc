#include<bits/stdc++.h>
using namespace std;
int n;
string s;
string c;
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>s>>c;
		int ans=0;
		for(int j=0;j<s.size();j++)
		{
			int tmp=2e9;
			for(int k=0;k<c.size();k++)
			{
				tmp=min({tmp, abs(s[j]-c[k]), 26-abs(s[j]-c[k])});
			}
			ans+=tmp;
		}
		cout<<"Case #"<<i<<": "<<ans<<"\n";
	}
}