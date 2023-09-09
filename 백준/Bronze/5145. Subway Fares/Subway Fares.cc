#include<bits/stdc++.h>
using namespace std;

int t, n;
int a[110];

int main()
{
	cin>>t;
	for(int x=1;x<=t;x++)
	{
		cout<<"Data Set "<<x<<":\n";
		cin>>n;
		map<string, int> m;
		for(int i=1;i<n;i++) cin>>a[i];
		for(int i=1;i<=n;i++)
		{
			string s;
			cin>>s;
			m[s]=i;
		}
		string p, q;
		cin>>p>>q;
		cout<<a[abs(m[p]-m[q])]<<"\n\n";
	}
}