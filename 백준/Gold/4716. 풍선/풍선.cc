#include<bits/stdc++.h>
using namespace std;
#define fi first 
#define se second
typedef pair<pair<int, int>, int> pi3;

pi3 d[10010];
int n, a, b, ans;

bool cmp(const pi3 s, const pi3 t)
{
	return abs(s.fi.fi-s.fi.se)>abs(t.fi.fi-t.fi.se);
}

int main()
{
	while(1)
	{
		scanf("%d%d%d", &n, &a, &b);
		if(n==0&&a==0&&b==0) return 0;
		ans=0;
		for(int i=0;i<n;i++)
		{
			scanf("%d%d%d", &d[i].se, &d[i].fi.fi, &d[i].fi.se);
		}
		sort(d, d+n, cmp);
		for(int i=0;i<n;i++)
		{
			if(d[i].fi.fi<d[i].fi.se)
			{
				if(d[i].se<=a)
				{
					a-=d[i].se;
					ans+=d[i].fi.fi*d[i].se;
				}
				else
				{
					ans+=d[i].fi.fi*a+d[i].fi.se*(d[i].se-a);
					a=0;
				}
			}
			else
			{
				if(d[i].se<=b)
				{
					b-=d[i].se;
					ans+=d[i].fi.se*d[i].se;
				}
				else
				{
					ans+=d[i].fi.se*b+d[i].fi.fi*(d[i].se-b);
					b=0;
				}
			}
		}
		printf("%d\n", ans);
	}
}