#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		int ans=0;
		cin>>s;
		for(int i=0;i<s.size()/8;i++)
		{
			int tmp=0;
			for(int j=i*8;j<i*8+8;j++)
			{
				tmp+=s[j]-'0';
			}
			if(tmp&1) ans++;
		}
		cout<<ans<<"\n";
	}
}