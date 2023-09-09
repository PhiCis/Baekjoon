#include<stdio.h>
int n, t;
int a[505050], b[505050], c[1000010];
long long ans;
void merge(int s, int m, int e)
{
	int h=s;
	int i=s, j=m+1;
	while(i<=m&&j<=e)
	{
		if(a[i]<=a[j])
		{
			b[h]=a[i];
			h++;
			i++;
		}
		else
		{
			b[h]=a[j];
			ans+=m-i+1;
			//printf("%d %d %d\n", a[i], a[j], m-i+1);
			h++;
			j++;
		}
	}
	if(i>m)
	{
		for(;j<=e;j++)
		{
			b[h++]=a[j];
		}
	}
	else
	{
		for(;i<=m;i++)
		{
			b[h++]=a[i];
		}
	}
	
	for(h=s;h<=e;h++)
	{
		a[h]=b[h];
	}
}
void mergesort(int s, int e)
{
	if(s<e)
	{
		int m=(s+e)/2;
		mergesort(s, m);
		mergesort(m+1, e);
		merge(s, m, e);
	}
}
int main()
{
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d", &t);
		c[t]=i;
	}
	for(int i=1;i<=n;i++)
	{
		scanf("%d", &t);
		a[i]=c[t];
	}
	mergesort(1, n);
	printf("%lld", ans);
}