#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
struct a{
	ll x, y, v;
}a[3010];
ll sum[12040], lm[12040], rm[12040], ans[12040];
ll ANS;
int n, maxy;
bool cmpx(struct a T, struct a S)
{
	return T.x<S.x;
}
bool cmpy(struct a T, struct a S)
{
	return T.y<S.y;
}
void comp()
{
	int t[3010];
	sort(a+1, a+n+1, cmpx);
	t[1]=1;
	for(int i=2;i<=n;i++)
	{
		if(a[i].x==a[i-1].x) t[i]=t[i-1];
		else t[i]=t[i-1]+1;
	}
	for(int i=1;i<=n;i++)
	{
		a[i].x=t[i];
	}
	sort(a+1, a+n+1, cmpy);
	t[1]=1;
	for(int i=2;i<=n;i++)
	{
		if(a[i].y==a[i-1].y) t[i]=t[i-1];
		else t[i]=t[i-1]+1;
	}
	for(int i=1;i<=n;i++)
	{
		a[i].y=t[i];
	}
	maxy=a[n].y;
}

void update(int id, int s, int e, int t, ll v){
   if (t<s||e<t) return;
   if (s==e){
      sum[id]=v;
      ans[id]=lm[id]=rm[id]=max(0ll, v);
      return;
   }
   int m=(s+e)/2;
   update(id*2, s, m, t, v);
   update(id*2+1, m+1, e, t, v);
   
   sum[id] = sum[id*2] + sum[id*2+1];
   lm[id] = max(lm[id*2], sum[id*2]+lm[id*2+1]);
   rm[id] = max(rm[id*2+1], sum[id*2+1]+rm[id*2]);
   ans[id] = max(ans[id*2], ans[id*2+1]);
   ans[id] = max(ans[id], rm[id*2]+lm[id*2+1]);
}

ll find(int id, int s, int e, int t)
{
	if(t<s||e<t) return 0;
	if(s==e)
	{
		return sum[id];
	}
	int m=(s+e)/2;
	return find(id*2, s, m, t)+find(id*2+1, m+1, e, t);
}

int main()
{
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		scanf("%lld%lld%lld", &a[i].x, &a[i].y, &a[i].v);
	}
	comp();
	for(int i=1;i<=maxy;i++)
	{
		for(int j=1;j<=n;j++)
		{
			update(1, 1, n, j, 0ll);
		}
		int pnt=1;
		while(a[pnt].y<i) pnt++;
		for(int j=i;j<=maxy;j++)
		{
			while(a[pnt].y==j)
			{
				update(1, 1, n, a[pnt].x, a[pnt].v+find(1, 1, n, a[pnt].x));
				pnt++;
			}
			if(ans[1]>ANS) ANS=ans[1];
		}
	}
	printf("%lld", ANS);
}