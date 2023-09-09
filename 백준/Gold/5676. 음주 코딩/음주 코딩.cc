#include<bits/stdc++.h>
using namespace std;
int n, k, a, b;
char c;
int T[400040];

void upd(int id, int s, int e, int t, int v)
{
	if(t<s||e<t) return;
	if(s==e)
	{
		if(v==0) T[id]=0;
		if(v>0) T[id]=1;
		if(v<0) T[id]=-1;
		return;
	}
	int m=s+e>>1;
	upd(id*2, s, m, t, v);
	upd(id*2+1, m+1, e, t, v);
	T[id]=T[id*2]*T[id*2+1];
}

int query(int id, int s, int e, int l, int r)
{
	if(e<l||r<s) return 1;
	if(l<=s&&e<=r)
	{
		return T[id];
	}
	int m=s+e>>1;
	return query(2*id, s, m, l, r)*query(2*id+1, m+1, e, l, r);
}

int main()
{
	while(scanf("%d%d", &n, &k)==2)
	{
		for(int i=1;i<=n;i++)
		{
			scanf("%d", &a);
			upd(1, 1, n, i, a);
		}
		for(int i=1;i<=k;i++)
		{
			scanf(" %c", &c);
			if(c=='C')
			{
				scanf("%d%d", &a, &b);
				upd(1, 1, n, a, b);
			}
			else
			{
				scanf("%d%d", &a, &b);
				int ans=query(1, 1, n, a, b);
				if(ans==1) printf("+");
				if(ans==0) printf("0");
				if(ans==-1) printf("-");
			}
		}
		printf("\n");
	}
	
	
}