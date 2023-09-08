#include<bits/stdc++.h>
using namespace std;
priority_queue<int, vector<int>, greater<int> > pq;
int main()
{
	int n, a, ans=0;;
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d", &a);
		pq.push(a);
	}
	for(int i=1;i<n;i++)
	{
		int x=pq.top();
		pq.pop();
		int y=pq.top();
		pq.pop();
		pq.push(x+y);
		ans+=x+y;
	}
	printf("%d", ans);
}