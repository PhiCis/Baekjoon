#include<bits/stdc++.h>
using namespace std;
int n;
char a[20];
int ans, x;
int main()
{
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		scanf(" %s", a);
		if(!strcmp(a, "add"))
		{
			scanf("%d", &x);
			ans|=(1<<x);
		}
		if(!strcmp(a, "remove"))
		{
			scanf("%d", &x);
			ans&=((1<<21)-2-(1<<x));
		}
		if(!strcmp(a, "check"))
		{
			scanf("%d", &x);
			printf("%d\n", ans&(1<<x)?1:0);
		}
		if(!strcmp(a, "toggle"))
		{
			scanf("%d", &x);
			ans^=(1<<x);
		}
		if(!strcmp(a, "all"))
		{
			ans=(1<<21)-2;
		}
		if(!strcmp(a, "empty"))
		{
			ans=0;
		}
	}
}