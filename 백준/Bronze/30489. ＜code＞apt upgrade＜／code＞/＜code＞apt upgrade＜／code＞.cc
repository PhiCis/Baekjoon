#include<bits/stdc++.h>
using namespace std;

long long n, m, k, a[100010], s, ans;

int main()
{
	cin>>n>>m>>k;
	m=min(n, m+k);
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		s+=a[i];
	}
	sort(a+1, a+n+1);
	for(int i=n;i>=n-m+1;i--) ans+=a[i];
	cout.precision(10);
	cout<<(double)ans/s*100;
}