#include<bits/stdc++.h>
using namespace std;
int n, a[1000010];
int main()
{
	scanf("%d", &n);
	for(int i=0;i<n;i++)
	{
		scanf("%d", &a[i]);
	}
	sort(a, a+n);
	for(int i=n-1;i>=0;i--)
	{
		printf("%d\n", a[i]);
	}
}