#include<bits/stdc++.h>
using namespace std;

int n;
string s;

int main()
{
	while(1)
	{
		cin>>n;
		if(n==0) return 0;
		cin>>s;
		for(int i=s.size()-1;i>=0;i--)
		{
			if(s[i]>='A' && s[i]<='Z')
			{
				int tmp = (s[i]-'A'+n)%28;
				if(tmp<26) cout<<char('A'+tmp);
				if(tmp==26) cout<<"_";
				if(tmp==27) cout<<".";
			}
			if(s[i]=='_')
			{
				int tmp = (26+n)%28;
				if(tmp<26) cout<<char('A'+tmp);
				if(tmp==26) cout<<"_";
				if(tmp==27) cout<<".";
			}
			if(s[i]=='.')
			{
				int tmp = (27+n)%28;
				if(tmp<26) cout<<char('A'+tmp);
				if(tmp==26) cout<<"_";
				if(tmp==27) cout<<".";
			}
		}
		cout<<"\n";
	}
}