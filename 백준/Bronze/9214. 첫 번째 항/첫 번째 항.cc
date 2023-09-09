#include<bits/stdc++.h>
using namespace std;

main()
{
	int cnt=0;
	while(1)
	{
		cnt++;
		string s;
		cin>>s;
		if(s=="0") return 0;
		cout<<"Test "<<cnt<<": ";
		while(1)
		{
			if(((int)s.size())&1)
			{
				cout<<s<<"\n";
				break;
			}
			string t;
			for(int i=0;i<s.size();i+=2)
			{
				if(i-1>=0 && s[i-1]==s[i+1])
				{
					cout<<s<<"\n";
					goto skip;
				}
				for(int j=0;j<s[i]-'0';j++) t+=s[i+1];
			}
			if(s==t)
			{
				cout<<s<<"\n";
				break;
			}
			s=t;
		}
		skip:;
	}
}