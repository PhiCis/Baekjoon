#include<bits/stdc++.h>
using namespace std;

int n, m;
int a[110], tmp[110];

int main()
{
	scanf("%d%d", &n, &m);
	for(int i=1;i<=n;i++)
	{
		a[i]=i;
	}
	for(int i=1;i<=m;i++)
	{
		int b, c, d;
		scanf("%d%d%d", &b, &d, &c);
		for(int j=b;j<=b+d-c;j++)
		{
			tmp[j]=a[j+c-b];
		}
		for(int j=b+d-c+1;j<=d;j++)
		{
			tmp[j]=a[j-d+c-1];
		}
		for(int j=b;j<=d;j++)
		{
			a[j]=tmp[j];
		}
	}
	for(int i=1;i<=n;i++)
	{
		printf("%d ", a[i]);
	}
}