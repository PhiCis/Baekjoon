#include<bits/stdc++.h>
using namespace std;
map<pair<int, int> , bool> m;
int n, k;
int main()
{
	cin>>n>>k;
	for(int i=n;i<=k;i++)
	{
		for(int j=n;j<=k;j++)
		{
			m[{i/__gcd(i, j), j/__gcd(i, j)}]=true;
		}
	}
	cout<<m.size();
}