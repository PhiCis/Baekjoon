#include<bits/stdc++.h>
using namespace std;

int a[30030], v[30030];

int T[200020];

void upd(int id, int s, int e, int t, int v)
{
	if(t<s||e<t) return;
	if(s==e)
	{
		T[id]=v;
		return;
	}
	int m=s+e>>1;
	upd(id*2, s, m, t, v);
	upd(id*2+1, m+1, e, t, v);
	T[id]=T[id*2]+T[id*2+1];
}

int find(int id, int s, int e, int v)
{
	int m=s+e>>1;
	if(s==e) return s;
	if(T[id*2]>=v) return find(id*2, s, m, v);
	else return find(id*2+1, m+1, e, v-T[id*2]);
}


int main()
{
	int n;
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d", &a[i]);
		if(a[i]>=i)
		{
			printf("NIE");
			return 0;
		}
		upd(1, 1, n, i, 1);
	}
	for(int i=n;i>=1;i--)
	{
		v[i] = find(1, 1, n, i-a[i]);
		upd(1, 1, n, v[i], 0);
	}
	for(int i=1;i<=n;i++)
	{
		printf("%d\n", v[i]);
	}
}