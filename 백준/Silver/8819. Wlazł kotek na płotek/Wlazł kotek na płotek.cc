#include<bits/stdc++.h>
using namespace std;

int t;
int n;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(int i=1;i<=n;i++)
		{
			if(__gcd(i, n)==1) cout<<i<<" ";
		}
		cout<<"\n";
	}
}