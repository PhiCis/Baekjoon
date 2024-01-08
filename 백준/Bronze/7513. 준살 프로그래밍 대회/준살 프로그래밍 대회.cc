#include<bits/stdc++.h>
using namespace std;

int t, n, m, k, a;
int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(0);
	cin>>t;
	for(int z=1;z<=t;z++)
	{
		cout<<"Scenario #"<<z<<":\n";
		cin>>n;
		vector<string> v(n);
		for(int i=0;i<n;i++)
		{
			cin>>v[i];
		}
		cin>>m;
		for(int i=0;i<m;i++)
		{
			cin>>k;
			for(int j=0;j<k;j++)
			{
				cin>>a;
				cout<<v[a];
			}
			cout<<"\n";
		}
		cout<<"\n";
	}
}