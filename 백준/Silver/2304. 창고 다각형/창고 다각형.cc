#include<bits/stdc++.h>
using namespace std;
vector<pair<int, int> > v1, v2;
struct a{
	int x, y;
}a[1010];
int n;
int ans;
bool cmp(struct a t, struct a s)
{
	return t.x<s.x;
}
int main()
{
	scanf("%d", &n);
	for(int i=0;i<n;i++)
	{
		scanf("%d%d", &a[i].x, &a[i].y);
	}
	sort(a, a+n, cmp);
	
	v1.push_back({0, 0});
	for(int i=0;i<n;i++)
	{
		if(v1.back().second<a[i].y)
		{
			//printf("%d/%d", a[i].x, a[i].y);
			ans+=(a[i].x-v1.back().first)*v1.back().second;
			//printf("/%d  ", ans);
			v1.push_back({a[i].x, a[i].y});
		}
	}
	v2.push_back({1010, 0});
	for(int i=n-1;i>=0;i--)
	{
		if(v2.back().second<a[i].y)
		{
			//printf("%d/%d", a[i].x+1, a[i].y);
			ans+=(-a[i].x-1+v2.back().first)*v2.back().second;
			//printf("/%d  ", ans);
			v2.push_back({a[i].x+1, a[i].y});
		}
	}
	
	ans+=(v2.back().first-v1.back().first)*v1.back().second;
	printf("%d", ans);
	
}