#include<bits/stdc++.h>
using namespace std;
map<char, int> m={{'W', 64}, {'H', 32}, {'Q', 16}, {'E', 8}, {'S', 4}, {'T', 2}, {'X', 1}};
main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	string s;
	while(1)
	{
		cin>>s;
		if(s=="*") return 0;
		int ans=0;
		int cnt=0;
		for(int i=0;i<s.size();i++)
		{
			if(s[i]=='/')
			{
				if(cnt==64) ans++;
				cnt=0;
			}
			else
			{
				cnt+=m[s[i]];
			}
		}
		cout<<ans<<"\n";
	}
}