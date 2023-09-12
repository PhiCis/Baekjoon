#include<bits/stdc++.h>
using namespace std;

int w, p, a[110];

int main()
{
	cin>>w>>p;
	for(int i=1;i<=p;i++)
	{
		cin>>a[i];
	}
	a[0]=0;
	a[p+1]=w;
	vector<int> v;
	for(int i=0;i<=p+1;i++)
	{
		for(int j=i+1;j<=p+1;j++)
		{
			v.push_back(a[j]-a[i]);
		}
	}
	sort(v.begin(), v.end());
	v.erase(unique(v.begin(), v.end()), v.end());
	for(auto i:v)
	{
		cout<<i<<" ";
	}
}