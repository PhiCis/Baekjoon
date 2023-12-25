#include<bits/stdc++.h>
using namespace std;

int n, a[50];
long long ans;
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	sort(a+1, a+n+1);
	for(int i=1;i<=n;i++)
	{
		ans+=(1ll<<(i-1))*a[i];
	}
	printf("%.10lf", (double)ans/(1ll<<n));
}