#include<bits/stdc++.h>
using namespace std;

string a="yhesocvxduiglbkrztnwjpfmaq";
string s;
int n;

int main()
{
	cin>>n;
	getline(cin, s);
	for(int i=1;i<=n;i++)
	{
		cout<<"Case #"<<i<<": ";
		getline(cin, s);
		for(int j=0;j<s.size();j++)
		{
			if(s[j]==' ') cout<<' ';
			else cout<<a[s[j]-'a'];
		}
		cout<<"\n";
	}
}