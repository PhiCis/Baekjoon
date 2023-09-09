#include<bits/stdc++.h>
using namespace std;

int ans;
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		string s;
		cin>>s;
		for(int i=1;i<s.size();i++)
		{
			if(s[i-1]=='C'&&s[i]=='D') goto skip;
		}
		ans++;
		skip:;
	}
	cout<<ans;
}