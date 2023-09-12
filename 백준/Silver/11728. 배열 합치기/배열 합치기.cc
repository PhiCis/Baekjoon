#include<bits/stdc++.h>
using namespace std;

int n, m, a[2000020];

int main()
{
	scanf("%d%d", &n, &m);
	for(int i=0;i<n+m;i++)
	{
		scanf("%d", &a[i]);
	}
	sort(a, a+n+m);
	for(int i=0;i<n+m;i++)
	{
		printf("%d ", a[i]);
	}
}