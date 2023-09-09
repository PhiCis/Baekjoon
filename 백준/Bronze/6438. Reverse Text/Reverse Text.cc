#include<bits/stdc++.h>
using namespace std;

int t;
string s;

int main()
{
	cin>>t;
	getline(cin, s);
	while(t--)
	{
		getline(cin, s);
		for(int i=s.size()-1;i>=0;i--)
		{
			cout<<s[i];
		}
		cout<<"\n";
	}
}