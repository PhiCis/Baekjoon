#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n, m;
		string s;
		cin>>n>>m>>s;
		while(m--)
		{
			string tmp;
			for(int i=n;i<s.size();i++) tmp+=s[i];
			tmp+=s;
			s=tmp;
		}
		cout<<s<<"\n";
	}
}