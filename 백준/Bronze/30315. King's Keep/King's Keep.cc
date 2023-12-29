#include<bits/stdc++.h>
using namespace std;

int n, a[1010], b[1010];
double ANS=9e18;

int main()
{
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i]>>b[i];
	for(int i=1;i<=n;i++)
	{
		double ans=0;
		for(int j=1;j<=n;j++)
		{
			ans+=sqrt((a[i]-a[j])*(a[i]-a[j])+(b[i]-b[j])*(b[i]-b[j]));
		}
		ANS=min(ANS, ans);
	}
	cout.precision(10);
	cout<<ANS/(n-1);
}