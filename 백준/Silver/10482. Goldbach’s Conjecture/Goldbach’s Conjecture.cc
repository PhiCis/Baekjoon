#include<bits/stdc++.h>
using namespace std;
bool p[33000];

int main()
{
	p[2]=1;
	for(int i=3;i<=32000;i+=2) p[i]=1;
	for(int i=3;i*i<=32000;i+=2)
	{
		for(int j=i*i;j<=32000;j+=2*i)
		{
			p[j]=0;
		}
	}
	int n;
	scanf("%d", &n);
	while(n--)
	{
		int a, ans=0;
		scanf("%d", &a);
		for(int i=1;i<=a/2;i++)
		{
			if(p[i]&p[a-i])
			{
				ans++;
			}
		}
		printf("%d has %d representation(s)\n", a, ans);
		for(int i=1;i<=a/2;i++)
		{
			if(p[i]&p[a-i])
			{
				printf("%d+%d\n", i, a-i);
			}
		}
		printf("\n");
	}
}