#include<bits/stdc++.h>
using namespace std;

int n, a[100010], x, ans;
int main()
{
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d", &a[i]);
	}
	scanf("%d", &x);
	sort(a+1, a+1+n);
	int s=1,e=n;
	while(s<e)
	{
		if(a[s]+a[e]>x)
		{
			e--;
		}
		else if(a[s]+a[e]<x)
		{
			s++;
		}
		else
		{
			ans++;
			e--;
			s++;
		}
	}
	printf("%d", ans);
}