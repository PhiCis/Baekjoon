#include<bits/stdc++.h>
using namespace std;

int t, c, d;
string a, b;

int main()
{
	cin>>t;
	while(t--)
	{
		map<string, int> m;
		for(int i=0;i<16;i++)
		{
			cin>>a>>b>>c>>d;
			if(c>d) m[a]++;
			else m[b]++;
		}
		for(auto it=m.begin();it!=m.end();it++)
		{
			if((*it).second==4) cout<<(*it).first<<"\n";
		}
	}
}