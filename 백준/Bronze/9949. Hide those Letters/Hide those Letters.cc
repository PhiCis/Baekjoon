#include<bits/stdc++.h>
using namespace std;

char a, b;
int n;
string s;
int cnt;

int main()
{
	while(1)
	{
		cnt++;
		cin>>a>>b;
		if(a=='#') return 0;
		cin>>n;
		getline(cin, s);
		cout<<"Case "<<cnt<<"\n";
		for(int i=1;i<=n;i++)
		{
			getline(cin, s);
			for(int j=0;j<s.size();j++)
			{
				if(s[j]==a||s[j]-'A'+'a'==a||s[j]==b||s[j]-'A'+'a'==b) cout<<"_";
				else cout<<s[j];
			}
			cout<<"\n";
		}
		cout<<"\n";
	}
}