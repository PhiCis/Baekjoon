#include<bits/stdc++.h>
using namespace std;

int n, k, a, b;

int main()
{
	cin>>n;
	while(n--)
	{
		map<int, int> m;
		cin>>k;
		for(int i=1;i<=k;i++)
		{
			cin>>a>>b;
			m[b]++;
		}
		cout<<max({m[1], m[2], m[3], m[4], m[5], m[6], m[7], m[8]})<<"\n";
	}
}