#include<bits/stdc++.h>
using namespace std;

int n, a[101010];
bool cmp(int a, int b)
{
	return a>b;
}

int main()
{
	scanf("%d", &n);
	for(int i=0;i<n;i++)
	{
		scanf("%d", &a[i]);
	}
	sort(a, a+n, cmp);
	for(int i=0;i<n;i++)
	{
		a[i]+=i+2;
	}
	sort(a, a+n, cmp);
	printf("%d", a[0]);
}