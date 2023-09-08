#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		string s;
		getline(cin, s);
		getline(cin, s);
//		cout<<s;
		string t;
		cin>>t;
		for(int i=0;i<s.size();i++)
		{
			if(s[i]==' ') cout<<' ';
			else cout<<t[s[i]-'A'];
		}
		cout<<"\n";
	}
}