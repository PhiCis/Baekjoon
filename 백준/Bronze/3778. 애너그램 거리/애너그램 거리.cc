#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	int n;
	int cnt = 0;
	cin>>n;
	string g;
	getline(cin, g);
	while(n--)
	{
		cnt++;
		string s, t;
		int ans = 0;
		vector<int> a(26, 0), b(26, 0);
		getline(cin, s);
		getline(cin, t);
		for(int i=0;i<s.size();i++)
		{
			a[s[i]-'a']++;
		}
		for(int i=0;i<t.size();i++)
		{
			b[t[i]-'a']++;
		}
		for(int i=0;i<26;i++)
		{
			ans+=abs(a[i]-b[i]);
		}
		cout<<"Case #"<<cnt<<": "<<ans<<"\n";
	}
}