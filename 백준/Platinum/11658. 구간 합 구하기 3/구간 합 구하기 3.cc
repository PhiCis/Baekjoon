#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
ll T[4100][4100];
int sz=1;
int n, q;
 
void update(int x, int y, ll v)
{
	x+=sz-1;
	y+=sz-1;
	T[x][y]=v;
	
	for(int i=(y>>1);i>=1;i>>=1)
	{
		T[x][i]=T[x][i*2]+T[x][i*2+1];
	}
	for(int i=(x>>1);i>=1;i>>=1)
	{
		for(int j=y;j>=1;j>>=1)
		{
			T[i][j]=T[i*2][j]+T[i*2+1][j];
		}
	}
}
 
ll queryy(int x, int y1, int y2)
{
	ll res=0;
	y1+=sz-1;
	y2+=sz-1;
	for(;y1<=y2;y1>>=1, y2>>=1)
	{
		if(y1&1) res+=T[x][y1++];
		if(!(y2&1)) res+=T[x][y2--];
	}
	return res;
}
 
ll query(int x1, int x2, int y1, int y2)
{
	ll res=0;
	x1+=sz-1;
	x2+=sz-1;
	for(;x1<=x2;x1>>=1, x2>>=1)
	{
		if(x1&1) res+=queryy(x1++, y1, y2);
		if(!(x2&1)) res+=queryy(x2--, y1, y2);
	}
	return res;
}
 
int main()
{
	scanf("%d%d", &n, &q);
	while(n>sz) sz<<=1;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			int a;
			scanf("%d", &a);
			update(i, j, a);
		}
	}
	for(int i=1;i<=q;i++)
	{
		int a;
		scanf("%d", &a);
		if(a==0)
		{
			int x, y;
			ll v;
			scanf("%d%d%lld", &x, &y, &v);
			update(x, y, v);
		}
		else
		{
			int x1, x2, y1, y2;
			scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
			printf("%lld\n", query(x1, x2, y1, y2));
		}
		/*
		for(int j=1;j<=8;j++)
		{
			for(int k=1;k<=8;k++)
			{
				printf("%2lld ", T[j][k]);
			}
			printf("\n");
		}
		*/
		
	}
}