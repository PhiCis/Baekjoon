#include<bits/stdc++.h>
using namespace std;
queue<pair<int, int> > q;
int t, c[10], n, k, a;
int ans;
int main()
{
	scanf("%d", &t);
	while(t--)
	{
		ans=0;
		for(int i=0;i<10;i++)
		{
			c[i]=0;
		}
		scanf("%d%d", &n, &k);
		for(int i=0;i<n;i++)
		{
			scanf("%d", &a);
			c[a]++;
			if(i==k) q.push({a, 1});
			else q.push({a, 0});
		}
		while(1)
		{
			int fir=q.front().first;
			int sec=q.front().second;
			for(int i=9;i>fir;i--)
			{
				if(c[i]!=0)
				{
					q.pop();
					q.push({fir, sec});
					goto skip;
				}
			}
			c[fir]--;
			ans++;
			q.pop();
			if(sec==1) break;
			skip:;
		}
		printf("%d\n", ans);
		while(!q.empty()) q.pop();
	}
}