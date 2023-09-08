#include<bits/stdc++.h>
using namespace std;

int n, k, a[100010], d[100010], l[100010], r[100010], chk[100010];

struct cmp{
	bool operator()(pair<int, int> a, pair<int, int> b){
		return a.first>b.first;
	}
};

priority_queue<pair<int, int>, vector<pair<int, int> > , cmp> pq;
int ans;

int main()
{
	scanf("%d%d", &n, &k);
	for(int i=1;i<=n;i++)
	{
		scanf("%d", &a[i]);
	}
	d[0]=1000000000;
	for(int i=1;i<n;i++)
	{
		d[i]=a[i+1]-a[i];
		l[i]=i-1;
		r[i]=i+1;
		pq.push({d[i], i});
	}
	d[n]=1000000000;
	for(int i=1;i<=k;i++)
	{
retry:
		auto now = pq.top();
		pq.pop();
		
		//printf("%d %d\n", now.first, now.second);
		
		if(chk[now.second]) goto retry;
		
		ans+=now.first;
		
		int tmpl = l[now.second];
		int tmpr = r[now.second];
		l[now.second] = l[tmpl];
		r[now.second] = r[tmpr];
		
		l[r[tmpr]] = r[l[tmpl]] = now.second;
		
		d[now.second] = d[tmpr]+d[tmpl]-now.first;
		
		pq.push({d[now.second], now.second});
		chk[tmpr]++;
		chk[tmpl]++;
	}
	printf("%d", ans);
	return 0;
}