#include<bits/stdc++.h>
using namespace std;
vector<int> v[200010];
int c[200010];
int a, b;
queue<int> q;

void BFS()
{
	while(!q.empty())
	{
		int node=q.front();
		int cnt=c[node];
		q.pop();
		for(int i=0;i<v[node].size();i++)
		{
			if(c[v[node][i]]==0)
			{
				q.push(v[node][i]);
				c[v[node][i]]=cnt+1;
			}
		}
	}	
}

int main()
{
	scanf("%d%d", &a, &b);
	for(int i=0;i<=100000;i++)
	{
		if(i-1>=0) v[i].push_back(i-1);
		v[i].push_back(i+1);
		v[i].push_back(i*2);
	}
	q.push(a);
	c[a]=1;
	BFS();
	printf("%d", c[b]-1);
}