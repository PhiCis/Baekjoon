#include<bits/stdc++.h>
using namespace std;

int n;
string s;

int main()
{
	cin>>n;
	getline(cin, s);
	while(n--)
	{
		getline(cin, s);
		while(s[0]==' ') s.erase(s.begin());
		while(s[s.size()-1]==' ') s.erase(s.end()-1); 
//		cout<<s<<"\n";
		if(s.empty())
		{
			cout<<"invalid input\n";
			goto skip;
		}
		for(int i=0;i<s.size();i++)
		{
			if(s[i]>'9'||s[i]<'0')
			{
				cout<<"invalid input\n";
				goto skip;
			}
		}
		while(s[0]=='0') s.erase(s.begin());
		if(s.empty()) cout<<0;
		else cout<<s;
		cout<<"\n";
		skip:;
	}
}