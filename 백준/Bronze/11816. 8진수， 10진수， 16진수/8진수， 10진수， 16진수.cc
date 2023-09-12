#include<bits/stdc++.h>
using namespace std;

string s;
int ans;

int main()
{
	cin>>s;
	if(s[0]!='0')
	{
		cout<<s;
	}
	else if(s[1]!='x')
	{
		for(int i=1;i<s.size();i++)
		{
			ans*=8;
			ans+=(s[i]-'0');
		}
		printf("%d", ans);
	}
	else
	{
		for(int i=2;i<s.size();i++)
		{
			ans*=16;
			if(s[i]<='9')
			{
				ans+=(s[i]-'0');
			}
			else
			{
				ans+=(s[i]-'a'+10);
			}
		}
		printf("%d", ans);
	}
}