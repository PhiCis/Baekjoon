#include<stdio.h>
#include<algorithm>
using namespace std;
int n, i, a[60], b[60], s;
int main()
{
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		scanf("%d", &a[i]);
	}
	for(i=0;i<n;i++)
	{
		scanf("%d", &b[i]);
	}
	sort(a, a+n);
	sort(b, b+n);
	for(i=0;i<n;i++)
	{
		s+=a[n-1-i]*b[i];
	}
	printf("%d", s);
}