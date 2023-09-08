#include<bits/stdc++.h>
using namespace std;

int main()
{
	int k;
	scanf("%d", &k);
	while(k--)
	{
		int v, e;
		vector<int> g[20020];
		int c[20020]={0}, d[20020]={0};
		scanf("%d%d", &v, &e);
		for(int i=1;i<=e;i++)
		{
			int a, b;
			scanf("%d%d", &a, &b);
			g[a].push_back(b);
			g[b].push_back(a);
		}
		for(int i=1;i<=v;i++)
		{
			if(!c[i])
			{
				queue<int> q;
				c[i]=1;
				d[i]=1;
				q.push(i);
				while(!q.empty())
				{
					int now=q.front();
					q.pop();
					for(auto j:g[now])
					{
						if(!c[j])
						{
							c[j]=1;
							d[j]=d[now]+1;
							q.push(j);
						}
						else
						{
							if(!((d[j]^d[now])&1))
							{
								printf("NO\n");
								goto skip;
							}
						}
					}
				}
			}
		}
		printf("YES\n");
		skip:;
	}
}