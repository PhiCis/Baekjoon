#include<bits/stdc++.h>
using namespace std;
int n, a[100], s, k;
double ans;

int main()
{
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d", &a[i]);
		s+=a[i];
	}
	scanf("%d", &k);
	for(int i=1;i<=n;i++)
	{
		double tmp=1;
		for(int j=0;j<k;j++)
		{
			tmp*=a[i]-j;
		}
		ans+=tmp;
	}
	double tmp=1;
	for(int j=0;j<k;j++)
	{
		tmp*=s-j;
	}
	ans/=tmp;
	printf("%.15lf", ans);
}