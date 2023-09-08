#include<bits/stdc++.h>
using namespace std;

int t, a, b;
bool p[10010];
int c[10010];
int main()
{
	p[2]=1;
	for(int i=3;i<=10000;i+=2) p[i]=1;
	for(int i=3;i*i<=10000;i+=2)
		for(int j=i*i;j<=10000;j+=2*i)
			p[j]=0;
	scanf("%d", &t);
	while(t--)
	{
		scanf("%d%d", &a, &b);
		for(int i=1000;i<=9999;i++) c[i]=0;
		queue<int> q;
		c[a]=1;
		q.push(a);
		while(!q.empty())
		{
			int now = q.front();
			q.pop();
			for(int i=0;i<10;i++)
			{
				int tmp=now/10*10+i;
				if(p[tmp]==1 && c[tmp]==0)
				{
					c[tmp]=c[now]+1;
					q.push(tmp);
				}
			}
			for(int i=0;i<10;i++)
			{
				int tmp=now/100*100+i*10+now%10;
				if(p[tmp]==1 && c[tmp]==0)
				{
					c[tmp]=c[now]+1;
					q.push(tmp);
				}
			}
			for(int i=0;i<10;i++)
			{
				int tmp=now/1000*1000+i*100+now%100;
				if(p[tmp]==1 && c[tmp]==0)
				{
					c[tmp]=c[now]+1;
					q.push(tmp);
				}
			}
			for(int i=1;i<10;i++)
			{
				int tmp=i*1000+now%1000;
				if(p[tmp]==1 && c[tmp]==0)
				{
					c[tmp]=c[now]+1;
					q.push(tmp);
				}
			}
		}
		if(!c[b]) printf("Impossible\n");
		else printf("%d\n", c[b]-1);
	}
}