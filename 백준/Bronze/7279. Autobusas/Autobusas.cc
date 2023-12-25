#include<bits/stdc++.h>
using namespace std;

int n, k, a[1010], b[1010];
int main()
{
	cin>>n>>k;
	int s=-k;
	int ans=0;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>b[i];
		s+=a[i]-b[i];
		ans=max(ans, s);
	}
	cout<<ans;
}