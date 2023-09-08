#include<bits/stdc++.h>
using namespace std;
#define INF 2e9

int n, a[1000010], c[1000010], d[1000010], p[1000010];
pair<int, int> tmp[1000010];
vector<int> v;
bool chk[1000010];

int main()
{
	scanf("%d", &n);
	for(int i=0;i<n;i++)
	{
		scanf("%d%d", &tmp[i].first, &tmp[i].second);
	}
	sort(tmp, tmp+n);
	for(int i=0;i<n;i++)
	{
		a[i]=tmp[i].second;
		p[a[i]]=i;
	}
	
	d[0] = a[0];
	c[0] = 1;
	int l = 1;
	
	for(int i=0;i<n;i++)
	{
		if(a[i] > d[l-1])
		{
			d[l++] = a[i];
			c[i] = l;
		}
		int tmp = lower_bound(d, d+l, a[i]) - d;
		d[tmp] = a[i];
		c[i] = tmp+1;
	}
	
	printf("%d\n", n-l);
	
	for(int i=n-1;i>=0;i--)
	{
		if(c[i] == l)
		{
			v.push_back(a[i]);
			l--;
		}
	}
	
	reverse(v.begin(), v.end());
	
	for(auto now : v)
	{
		chk[p[now]]=true;
	}
	for(int i=0;i<n;i++)
	{
		if(!chk[i])
		{
			printf("%d\n", tmp[i].first);
		}
	}
	
}