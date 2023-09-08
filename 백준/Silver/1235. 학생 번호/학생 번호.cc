#include<bits/stdc++.h>
using namespace std;

int n, k;
string s[1010], t[1010];

int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>s[i];
	}
	k=s[1].size();
	for(int i=k-1;i>=0;i--)
	{
		map<string, int> m;
		for(int j=1;j<=n;j++)
		{
			t[j]+=s[j][i];
			m[t[j]]=1;
		}
//		cout<<m.size()<<"\n";
		if(m.size()==n)
		{
			cout<<k-i;
			return 0;
		}
	}
}