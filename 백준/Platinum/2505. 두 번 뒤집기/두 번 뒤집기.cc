#include<bits/stdc++.h>
using namespace std;
int n;
int A[10010];
int a[10010];
int tmp[10010];
int inv[10010];
vector<pair<int, int> > v;
int main()
{
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d", &A[i]);
	}
	
	for(int i=1;i<=n;i++)
	{
		a[i]=A[i];
		inv[a[i]]=i;
	}
	for(int i=1;i<=n;i++)
	{
		if(a[i]!=i)
		{
			int t=inv[i];
			v.push_back({i, t});
			for(int j=i;j<=t;j++)
			{
				tmp[j]=a[t+i-j];
			}
			for(int j=i;j<=t;j++)
			{
				a[j]=tmp[j];
				inv[a[j]]=j;
			}
		}
	}
	if(v.size()==2)
	{
		for(int i=0;i<2;i++)
		{
			printf("%d %d\n", v[i].first, v[i].second);
		}
		return 0;
	}
	if(v.size()==1)
	{
		for(int i=0;i<1;i++)
		{
			printf("%d %d\n", v[i].first, v[i].second);
		}
		printf("1 1\n");
		return 0;
	}
	if(v.size()==0)
	{
		printf("1 1\n1 1\n");
		return 0;
	}
	v.clear();
	
	for(int i=1;i<=n;i++)
	{
		a[i]=A[i];
		inv[a[i]]=i;
	}
	for(int i=n;i>=1;i--)
	{
		if(a[i]!=i)
		{
			int t=inv[i];
			v.push_back({t, i});
			for(int j=t;j<=i;j++)
			{
				tmp[j]=a[t+i-j];
			}
			for(int j=t;j<=i;j++)
			{
				a[j]=tmp[j];
				inv[a[j]]=j;
			}
		}
	}
	if(v.size()==2)
	{
		for(int i=0;i<2;i++)
		{
			printf("%d %d\n", v[i].first, v[i].second);
		}
		return 0;
	}
}