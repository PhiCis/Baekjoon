#include<bits/stdc++.h>
using namespace std;

int a, b, c, d, e;
vector<pair<int, pair<int, int> > > v;
int main()
{
	cin>>a>>b>>c>>d>>e;
	for(int i=0;i<=100;i++)
	{
		for(int j=0;j<=100;j++)
		{
			if(i*b+j*d>=e)
			{
				v.push_back({i*a+j*c, {i, j}});
			}
		}
	}
	sort(v.begin(), v.end());
	cout<<v[0].second.first<<" "<<v[0].second.second<<" "<<v[0].first;
}