#include<bits/stdc++.h>
using namespace std;

int n;
map<string, int> m;
int d[5]={0, 4, 6, 4, 10};
vector<int> v;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=4;j++)
		{
			for(int k=1;k<=7;k++)
			{
				string s;
				cin>>s;
				if(s=="-") continue;
				m[s]+=d[j];
			}
		}
	}
	for(auto it=m.begin();it!=m.end();it++)
	{
		v.push_back(it->second);
	}
	sort(v.begin(), v.end());
	if(v.size()==0 || v[v.size()-1]-v[0]<=12) cout<<"Yes";
	else cout<<"No";
}