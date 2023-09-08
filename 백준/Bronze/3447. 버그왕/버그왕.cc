#include<bits/stdc++.h>
using namespace std;

string s, t;

int main()
{
	while(getline(cin, s))
	{
		for(int x=0;x<50;x++)
		{
			t="";
			int i;
			for(i=0;i<(int)s.size()-2;i++)
			{
				if(s[i]=='B'&&s[i+1]=='U'&&s[i+2]=='G')
				{
					i+=2;
				}
				else t+=s[i];
			}
			if(i==s.size()-2) t+=s[i], t+=s[i+1];
			if(i==s.size()-1) t+=s[i];
			s=t;
		}
		cout<<s<<"\n";
	}
}