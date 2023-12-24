#include<bits/stdc++.h>
using namespace std;

int n, a[10], ans;

int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	if(a[1]>a[3]) ans+=508*(a[1]-a[3]);
	else ans+=108*(a[3]-a[1]);
	if(a[2]>a[4]) ans+=212*(a[2]-a[4]);
	else ans+=305*(a[4]-a[2]);
	ans+=707*a[5];
	ans*=4763;
	cout<<ans;
}