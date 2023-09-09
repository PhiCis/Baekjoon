#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	string ans="";
	while(1)
	{
		cin>>s;
		if(s=="E-N-D") break;
		string tmp;
		for(int i=0;i<s.size();i++)
		{
			if((s[i]>='a'&&s[i]<='z')||s[i]=='-')
			{
				tmp+=s[i];
			}
			else if((s[i]>='A'&&s[i]<='Z'))
			{
				tmp+=(s[i]-'A'+'a');
			}
			else
			{
				if(ans.size()<tmp.size())
				{
					ans=tmp;
					tmp="";
				}
			}
		}
		if(ans.size()<tmp.size())
		{
			ans=tmp;
			tmp="";
		}
	}
	cout<<ans;
}