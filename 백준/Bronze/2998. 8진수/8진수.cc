#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s, ans;
	cin>>s;
	reverse(s.begin(), s.end());
	if(s.size()%3==1)
	{
		s+="00";
	}
	if(s.size()%3==2)
	{
		s+="0";
	}
	for(int i=0;i<s.size()/3;i++)
	{
		if(s[i*3]=='0')
		{
			if(s[i*3+1]=='0')
			{
				if(s[i*3+2]=='0')
				{
					ans+="0";
				}
				else
				{
					ans+="4";
				}
			}
			else
			{
				if(s[i*3+2]=='0')
				{
					ans+="2";
				}
				else
				{
					ans+="6";
				}
			}
		}
		else
		{
			if(s[i*3+1]=='0')
			{
				if(s[i*3+2]=='0')
				{
					ans+="1";
				}
				else
				{
					ans+="5";
				}
			}
			else
			{
				if(s[i*3+2]=='0')
				{
					ans+="3";
				}
				else
				{
					ans+="7";
				}
			}
		}
	}
	reverse(ans.begin(), ans.end());
	cout<<ans;
}