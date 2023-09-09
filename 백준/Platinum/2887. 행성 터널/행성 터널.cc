#include<stdio.h>
#include<algorithm>
using namespace std;
int p[100010], r[100010];
struct A{
	int x, y, z, index;
}a[100010];
bool cmpx(A t, A s){return t.x<s.x;}
bool cmpy(A t, A s){return t.y<s.y;}
bool cmpz(A t, A s){return t.z<s.z;}

struct EDGE{
	int cost, s, e;
}edge[300030];
bool cmp(const EDGE &a, const EDGE &b){
    return a.cost<b.cost;
}
int find(int x)
{
	while(p[x]>0) x=p[x];
	return x;
}
void merge(int x, int y)
{
	if(r[x]>r[y]) p[y]=x;
	else{
		p[x]=y;
		if(r[x]==r[y]) r[y]++;
	}
}
int n, i;
long long ans;
int main()
{
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		scanf("%d %d %d", &a[i].x, &a[i].y, &a[i].z);
		a[i].index=i+1;
	}
	int pnt=0;
	sort(a, a+n, cmpx);
	for(i=1;i<n;i++)
	{
		edge[pnt].cost=a[i].x-a[i-1].x;
		edge[pnt].s=a[i-1].index;
		edge[pnt].e=a[i].index;
		pnt++;
	}
	sort(a, a+n, cmpy);
	for(i=1;i<n;i++)
	{
		edge[pnt].cost=a[i].y-a[i-1].y;
		edge[pnt].s=a[i-1].index;
		edge[pnt].e=a[i].index;
		pnt++;
	}
	sort(a, a+n, cmpz);
	for(i=1;i<n;i++)
	{
		edge[pnt].cost=a[i].z-a[i-1].z;
		edge[pnt].s=a[i-1].index;
		edge[pnt].e=a[i].index;
		pnt++;
	}
	
	
	sort(edge, edge+3*n-3, cmp);
	/*for(i=0;i<3*n-3;i++)
	{
		printf("%d %d %d\n", edge[i].s, edge[i].e, edge[i].cost);
	}*/
	for(i=0;i<3*n-3;i++)
	{
		if(find(edge[i].s)!=find(edge[i].e))
		{
			merge(find(edge[i].s),find(edge[i].e));
			ans+=edge[i].cost;
		}
	}
	printf("%lld", ans);
}