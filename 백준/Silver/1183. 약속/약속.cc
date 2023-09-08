#include<bits/stdc++.h>
using namespace std;

int n, a, b;
vector<int> v;

int main()
{
	cin>>n;
	if(n&1) cout<<1;
	else
	{
		for(int i=1;i<=n;i++)
		{
			cin>>a>>b;
			v.push_back(b-a);
		}
		sort(v.begin(), v.end());
		cout<<v[v.size()/2]-v[v.size()/2-1]+1;
	}
}