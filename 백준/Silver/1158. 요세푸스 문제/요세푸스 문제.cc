#include<stdio.h>
#include<queue>
using namespace std;
queue<int> q;
int n, m, i;
int main()
{
	scanf("%d%d", &n, &m);
	for(i=1;i<=n;i++)
	{
		q.push(i);
	}
	printf("<");
	while(q.size()>1)
	{
		for(i=1;i<m;i++)
		{
			q.push(q.front());
			q.pop();
		}
		printf("%d, ", q.front());
		q.pop();
	}
	printf("%d>", q.front());
}