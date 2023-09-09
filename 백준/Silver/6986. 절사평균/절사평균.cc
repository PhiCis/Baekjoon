#include<bits/stdc++.h>
using namespace std;

int n, k;
double a[100010];
double ans1, ans2;
int main()
{
	scanf("%d%d", &n, &k);
	for(int i=0;i<n;i++)
	{
		scanf("%lf", &a[i]);
	}
	sort(a, a+n);
	for(int i=k;i<n-k;i++)
	{
		ans1+=a[i];
		if(i==k || i==n-k-1)
		{
			ans2+=(k+1)*a[i];
		}
		else ans2+=a[i];
	}
	printf("%.2lf\n%.2lf", 0.01*round(ans1/(n-2*k)*100), 0.01*round(ans2/n*100));
}