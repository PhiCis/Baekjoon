#include<bits/stdc++.h>
using namespace std;

int n, m, a, k;

int main()
{
	cin>>n>>m>>a;
	while(1)
	{
		cin>>k;
		if(k==(m+1)>>1)
		{
			cout<<0;
			return 0;
		}
		k-=(m+1)>>1;
		a+=k;
		a=(a+n)%n;
		if(a==0) cout<<n;
		else cout<<a;
		cout<<"\n";
	}
}