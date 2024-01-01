#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s, t;
	int cnt=0, ans=1;
	cin>>s>>t;
	for(int i=0;i<t.size();i++)
	{
		while(s[cnt]!=t[i])
		{
			cnt++;
			if(cnt>=s.size())
			{
				cnt=0;
				ans++;
			}
		}
		cnt++;
	}
	cout<<ans;
}