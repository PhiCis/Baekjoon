#include<bits/stdc++.h>
using namespace std;

double ans;
int a[550], b[550], ans1, ans2;

int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i]>>b[i];
	for(int i=1;i<=n;i++)
	{
		for(int j=i+1;j<=n;j++)
		{
			if(ans<(a[i]-a[j])*(a[i]-a[j])+(b[i]-b[j])*(b[i]-b[j]))
			{
				ans=(a[i]-a[j])*(a[i]-a[j])+(b[i]-b[j])*(b[i]-b[j]);
				ans1=i;
				ans2=j;
			}
		}
	}
	cout<<ans1<<" "<<ans2
	;
}