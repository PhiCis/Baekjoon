#include<bits/stdc++.h>
using namespace std;

int k, n, tmp=1;
vector<int> ans;
int T[400040];

void upd(int id, int s, int e, int t, int v)
{
	if(t<s||e<t) return;
	if(s==e)
	{
		T[id]=v;
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
	scanf("%d%d", &k, &n);
	for(int i=1;i<=k;i++)
	{
		upd(1, 1, k, i, 1);
	}
	for(int i=0;i<k;i++)
	{
		tmp=(tmp+n-1)%(k-i);
		if(tmp==0) tmp=k-i;
//		printf("%d ", tmp);
		int t = find(1, 1, k, tmp);
		ans.push_back(t);
		upd(1, 1, k, t, 0);
	}
	printf("<");
	for(int i=0;i<k;i++)
	{
		if(i) printf(", ");
		printf("%d", ans[i]);
	}
	printf(">");
}