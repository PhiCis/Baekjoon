#include<stdio.h>
#include<algorithm>
using namespace std;
int n, l, a[1010], pnt, cnt;
int main()
{
	scanf("%d%d", &n, &l);
	for(int i=0;i<n;i++)
	{
		scanf("%d", &a[i]);
	}
	sort(a, a+n);
	while(pnt<n)
	{
		cnt++;
		int tmp=a[pnt]+l-1;
		while(a[pnt]<=tmp) pnt++; 
	}
	printf("%d", cnt);
}