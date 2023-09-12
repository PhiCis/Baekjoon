#include<bits/stdc++.h>
using namespace std;

int n;
int a[512];
int d[9]={
(1<<0)|(1<<1)|(1<<3), 
(1<<1)|(1<<2)|(1<<5), 
(1<<3)|(1<<6)|(1<<7), 
(1<<5)|(1<<7)|(1<<8), 
(1<<0)|(1<<1)|(1<<2)|(1<<4),
(1<<0)|(1<<3)|(1<<4)|(1<<6),
(1<<2)|(1<<4)|(1<<5)|(1<<8),
(1<<4)|(1<<6)|(1<<7)|(1<<8),
(1<<1)|(1<<3)|(1<<4)|(1<<5)|(1<<7)
};
queue<int> q;

int main()
{
	scanf("%d", &n);
	while(n--)
	{
		int ans=0;
		for(int i=0;i<9;i++)
		{
			char c;
			scanf(" %c", &c);
			if(c=='*') ans^=(1<<i);
		}
//		printf("%d\n", ans);
		for(int i=0;i<512;i++)
		{
			a[i]=-1;
		}
		a[0]=0;
		q = queue<int>();
		q.push(0);
		while(!q.empty())
		{
			int now=q.front();
//			printf("%d %d\n", now, a[now]);
			if(now==ans)
			{
				printf("%d\n", a[now]);
				break;
			}
			q.pop();
			for(int i=0;i<9;i++)
			{
				if(a[now^d[i]]==-1)
				{
					a[now^d[i]]=a[now]+1;
					q.push(now^d[i]);
				}
			}
		}
	}
}