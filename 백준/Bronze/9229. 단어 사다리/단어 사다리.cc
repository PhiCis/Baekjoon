#include<bits/stdc++.h>
using namespace std;

int main()
{
	while(1)
	{
		string s, t;
		int flag=0;
		cin>>s;
		if(s=="#") return 0;
		while(1)
		{
			cin>>t;
			if(t=="#") break;
			if(s.size()!=t.size())
			{
				flag=1;
			}
			else
			{
				int tmp=0;
				for(int i=0;i<s.size();i++)
				{
					if(s[i]!=t[i]) tmp++;
				}
				if(tmp!=1) flag=1;
			}
			s=t;
		}
		if(flag) cout<<"Incorrect\n";
		else cout<<"Correct\n";
	}
}