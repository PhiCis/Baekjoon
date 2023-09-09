#include<bits/stdc++.h>
using namespace std;

int root[550], sz[550], chk[550], t;

int find(int x)
{
	if(root[x]==x)
	{
		return x;
	}
	else
	{
		return root[x]=find(root[x]);
	}
}

void merge(int x, int y)
{
	x=find(x);
	y=find(y);
	if(x==y) 
	{
		chk[x]=0; 
		return;
	}
	if(sz[x]<sz[y])
	{
		root[x]=y;
		sz[y]+=sz[x];
	}
	else
	{
		root[y]=x;
		sz[x]+=sz[x];
	}
}

int main()
{
	while(1)
	{
		t++;
		int n, m, a, b, ans=0;
		scanf("%d%d", &n, &m);
		if(n==0&&m==0) return 0;
		for(int i=1;i<=n;i++)
		{
			root[i]=i;
			sz[i]=1;
			chk[i]=1;
		}
		while(m--)
		{
			scanf("%d%d", &a, &b);
			if(a!=b) merge(a, b);
		}
		for(int i=1;i<=n;i++)
		{
			int r=find(i);
			if(chk[r])
			{
				chk[r]=0;
				ans++;
			}
		}
		if(ans==0) printf("Case %d: No trees.\n", t);
		else if(ans==1) printf("Case %d: There is one tree.\n", t);
		else printf("Case %d: A forest of %d trees.\n", t, ans);
	}
}