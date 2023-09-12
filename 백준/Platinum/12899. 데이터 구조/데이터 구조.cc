#include<bits/stdc++.h>
using namespace std;

int n, T[8000080];

void upd(int id,int s, int e, int t, int v)
{
	if(t<s||e<t) return;
	if(s==e)
	{
		T[id]+=v;
		return;
	}
	int m = s+e>>1;
	upd(id*2, s, m, t, v);
	upd(id*2+1, m+1, e, t, v);
	T[id]=T[id*2]+T[id*2+1];
}

int find(int id, int s, int e, int v)
{
	if(s==e) return s;
	int m = s+e>>1;
	if(T[id*2]<v)
	{
		return find(id*2+1, m+1, e, v-T[id*2]);
	}
	else
	{
		return find(id*2, s, m, v);
	}
}

int main()
{
	scanf("%d", &n);
	while(n--)
	{
		int a, b;
		scanf("%d%d", &a, &b);
		if(a==1)
		{
			upd(1, 1, 2000000, b, 1);
		}
		else
		{
			int ans = find(1, 1, 2000000, b);
			printf("%d\n", ans);
			upd(1, 1, 2000000, ans, -1);
		}
	}
}