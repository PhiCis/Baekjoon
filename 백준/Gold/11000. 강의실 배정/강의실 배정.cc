#include<bits/stdc++.h>
using namespace std;
struct a{
	int s, t;
}a[200020];
priority_queue<int, vector<int>, greater<int> > pq;
bool cmp(struct a x, struct a y)
{
	if(x.s==y.s) return x.t<y.t;
	else return x.s<y.s;
}
int n, ans;
int main()
{
	scanf("%d", &n);
	for(int i=0;i<n;i++)
	{
		scanf("%d%d", &a[i].s, &a[i].t);
	}
	sort(a, a+n, cmp);
	pq.push(a[0].t);
	ans=1;
	for(int i=1;i<n;i++)
	{
		if(pq.top()<=a[i].s) pq.pop();
		pq.push(a[i].t);
		if(ans<pq.size()) ans=pq.size();
	}
	printf("%d", ans);
}