#include<stdio.h>
#include<string.h>
#include<queue>
using namespace std;
queue<int> q;
int n, i, t;
char a[10];
int main()
{
	scanf("%d", &n);
	for(i=1;i<=n;i++)
	{
		scanf("%s", a);
		if(!strcmp(a, "push"))
		{
			scanf("%d", &t);
			q.push(t);
		}
		if(!strcmp(a, "pop"))
		{
			if(q.empty())
			{
				printf("-1\n");
			}
			else
			{
				printf("%d\n", q.front());
				q.pop();
			}
		}
		if(!strcmp(a, "size"))
		{
			printf("%d\n", q.size());
		}
		if(!strcmp(a, "empty"))
		{
			printf("%d\n", q.empty());
		}
		if(!strcmp(a, "front"))
		{
			if(q.empty())
			{
				printf("-1\n");
			}
			else
			{
				printf("%d\n", q.front());
			}
		}
		if(!strcmp(a, "back"))
		{
			if(q.empty())
			{
				printf("-1\n");
			}
			else
			{
				printf("%d\n", q.back());
			}
		}
	}
}