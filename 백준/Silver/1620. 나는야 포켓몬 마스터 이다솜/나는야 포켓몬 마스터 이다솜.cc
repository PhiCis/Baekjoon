#include<bits/stdc++.h>
using namespace std;
map<int, string> m1;
map<string, int> m2;
int n, m;
int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		string a;
		cin>>a;
		m1[i]=a;
		m2[a]=i;
	}
	for(int i=1;i<=m;i++)
	{
		string a;
		cin>>a;
		if(m2[a])
		{
			cout<<m2[a]<<"\n";
		}
		else
		{
			cout<<m1[stoi(a)]<<"\n";
		}
	}
}