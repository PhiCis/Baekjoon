#include<bits/stdc++.h>
using namespace std;

int n;
string a;
vector<string> v;

int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a;
		v.clear();
		for(int i=0;i<a.size();i++)
		{
			a+=a[0];
			a.erase(a.begin());
			v.push_back(a);
		}
		sort(v.begin(), v.end());
		cout<<v[0]<<"\n";
	}
}