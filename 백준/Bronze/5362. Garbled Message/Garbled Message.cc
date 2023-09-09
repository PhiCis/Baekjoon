#include<bits/stdc++.h>
using namespace std;
#define int long long

string s;

main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(0);
	while(getline(cin, s))
	{
//		if(s=="#") break;
		int i;
		for(i=4;i<s.size();i++)
		{
			if(s[i-4]=='i'&&s[i-3]=='i'&&s[i-2]=='i'&&s[i-1]=='n'&&s[i]=='g')
			{
				cout<<"th";
				i+=4;
			}
			else cout<<s[i-4];
		}
		for(i=max(0ll, i-4);i<s.size();i++) cout<<s[i];
		cout<<"\n";
	}
}