#include<bits/stdc++.h>
using namespace std;

int n, a[10101];
int s, ans;

int main()
{
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d", &a[i]);
		s+=a[i];
	}
	s/=n;
	for(int i=1;i<=n;i++)
	{
		ans+=abs(a[i]-s);
	}
	printf("%d", ans/2);
}