#include<bits/stdc++.h>
using namespace std;

int n, a[1010];
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
	for(int i=n;i>0;i--)
	{
		if(a[i-1]>=i&&a[i]<=i)
		{
			printf("%d", i);
			return 0;
		}
	}
	printf("0");
}