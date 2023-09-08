#include<stdio.h>
#include<queue>
#include<algorithm>
using namespace std;
queue<int> q;
int n, k, a, ans, cnt;
int main()
{
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		q.push(i);
	}
	scanf("%d", &k);
	while(k--)
	{
		cnt=0;
		scanf("%d", &a);
		while(q.front()!=a)
		{
			q.push(q.front());
			q.pop();
			cnt++;
		}
		ans+=min(cnt, (int)q.size()-cnt);
		q.pop();
	}
	printf("%d", ans);
}