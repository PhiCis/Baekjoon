#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, a, ans=0;
	map<int, int> m;
	cin>>n;
	while(n--)
	{
		cin>>a;
		m[a]++;
	}
	for(auto i=m.begin();i!=m.end();i++)
	{
		ans=max((*i).second, ans);
	}
	cout<<ans;
}