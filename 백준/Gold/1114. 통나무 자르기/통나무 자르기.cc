#include<bits/stdc++.h>
using namespace std;

int l, k, c;
int st, en;
int a[10010], s[10010];
int ans, ansi;

bool cmp(int a, int b)
{
	return a>b;
}

int main()
{
	scanf("%d%d%d", &l, &k, &c);
	for(int i=1;i<=k;i++)
	{
		scanf("%d", &a[i]);
	}
	a[k+1]=l;
	sort(a, a+k+2, cmp);
	
	
	for(int i=0;i<=k;i++)
	{
		s[i]=a[i]-a[i+1];
		st=max(st, s[i]);
	}
	
	en=l;
	ans=l;
	ansi=l;
	
	while(st<=en)
	{
		int m=st+en>>1;
		int tmp=0, tmpi;
		int res=0;
		
		for(int i=0;i<=k;i++)
		{
			if(tmp+s[i]<=m)
			{
				tmp+=s[i];
			}
			else
			{
				tmp=s[i];
				res++;
				tmpi=a[i];
			}
		}
		
		if(c>res)
		{
			if(ans>m)
			{
				ans=m;
				ansi=a[k];
			}
			en=m-1;
		}
		else if(c==res)
		{
			if(ans>m)
			{
				ans=m;
				ansi=tmpi;
			}
			en=m-1;
		}
		else
		{
			st=m+1;
		}
	}
	printf("%d %d", ans, ansi);
}