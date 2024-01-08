#include<bits/stdc++.h>
using namespace std;

int t, n, a;
int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(0);
	cin>>t;
	for(int z=1;z<=t;z++)
	{
		cout<<"Case #"<<z<<": ";
		cin>>n;
		map<int, int> m;
		long long t=0;
		for(int i=1;i<=n;i++)
		{
			cin>>a;
			if(m[a])
			{
				m[a]=0;
				t-=a;
			}
			else
			{
				m[a]=1;
				t+=a;
			}
		}
		cout<<t<<"\n";
	}
}