#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin>>s;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]!='I'&&s[i]!='O'&&s[i]!='S'&&s[i]!='H'&&s[i]!='Z'&&s[i]!='X'&&s[i]!='N')
		{
			cout<<"NO";
			return 0;
		}
	}
	cout<<"YES";
}