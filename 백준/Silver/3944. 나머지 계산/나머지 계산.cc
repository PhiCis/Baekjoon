#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	int t, n;
	string s;
	cin>>t;
	while(t--)
	{
		cin>>n;
		cin>>s;
		int tmp=0;
		for(int i=0;i<s.size();i++)
		{
			tmp+=s[i]-'0';
		}
		cout<<tmp%(n-1)<<"\n";
	}
}