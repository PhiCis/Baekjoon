#include<bits/stdc++.h>
using namespace std;
int n, a[100010], c1, c2, m1, m2;
int main()
{
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d", &a[i]);
	}
	c1=1; m1=1;
	for(int i=2;i<=n;i++)
	{
		if(a[i]>=a[i-1]) c1++;
		else
		{
			m1=max(m1, c1);
			c1=1;
		}
	}
	m1=max(m1, c1);
	c2=1; m2=1;
	for(int i=n-1;i>=1;i--)
	{
		if(a[i]>=a[i+1]) c2++;
		else
		{
			m2=max(m2, c2);
			c2=1;
		}
	}
	m2=max(m2, c2);
	printf("%d", max(m1, m2));
}