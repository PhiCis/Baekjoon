#include<bits/stdc++.h>
using namespace std;
#define int long long

int m, n, a[10000];

main()
{
	cin>>m>>n;
	for(int i=1;i<=n;i++)
	{
		int tmp=m%n+m/n;
		a[i]=tmp;
		m-=tmp;
	}
	sort(a+1, a+n+1);
	for(int i=n;i>=1;i--)
	{
		cout<<a[i]<<" ";
	}
	cout<<"\n";
	cout<<m;
}