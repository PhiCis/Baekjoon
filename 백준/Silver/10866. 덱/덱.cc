#include<stdio.h>
#include<string.h>
#include<deque>
using namespace std;
deque<int> dq;
int n, i, t;
char a[20];
int main()
{
	scanf("%d", &n);
	for(i=1;i<=n;i++)
	{
		scanf("%s", a);
		if(!strcmp(a, "push_back"))
		{
			scanf("%d", &t);
			dq.push_back(t);
		}
		if(!strcmp(a, "push_front"))
		{
			scanf("%d", &t);
			dq.push_front(t);
		}
		if(!strcmp(a, "pop_back"))
		{
			if(dq.empty())
			{
				printf("-1\n");
			}
			else
			{
				printf("%d\n", dq.back());
				dq.pop_back();
			}
		}
		if(!strcmp(a, "pop_front"))
		{
			if(dq.empty())
			{
				printf("-1\n");
			}
			else
			{
				printf("%d\n", dq.front());
				dq.pop_front();
			}
		}
		if(!strcmp(a, "size"))
		{
			printf("%d\n", dq.size());
		}
		if(!strcmp(a, "empty"))
		{
			printf("%d\n", dq.empty());
		}
		if(!strcmp(a, "front"))
		{
			if(dq.empty())
			{
				printf("-1\n");
			}
			else
			{
				printf("%d\n", dq.front());
			}
		}
		if(!strcmp(a, "back"))
		{
			if(dq.empty())
			{
				printf("-1\n");
			}
			else
			{
				printf("%d\n", dq.back());
			}
		}
	}
}