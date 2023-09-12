#include<bits/stdc++.h>
using namespace std;

int T;
int d[6][2]={-1, -1, 0, -1, 1, -1, -1, 1, 0, 1, 1, 1};

int n, m, pnta, pntb, ans;
int a[90][90];
bool visited[6500];
vector<int> v[6500];
int match[6500];

bool f(int i)
{
	for(auto j:v[i])
	{
		if(visited[j]) continue;
		
		visited[j]=true;
		if(match[j]==0||f(match[j]))
		{
			match[j]=i;
			return true;
		}
	}
	return false;
}

int main()
{
	scanf("%d", &T);
	while(T--)
	{
		pnta=pntb=ans=0;
		scanf("%d%d", &n, &m);
		for(int i=0;i<=n+1;i++)
		{
			for(int j=0;j<=m+1;j++)
			{
				a[i][j]=0;
			}
		}
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=m;j++)
			{
				char c;
				scanf(" %c", &c);
				if(c=='.')
				{
					if(j&1) a[i][j]=++pnta;
					else a[i][j]=++pntb;
				}
			}
		}
		for(int i=1;i<=pnta;i++)
		{
			v[i].clear();
		}
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=m;j+=2)
			{
				if(a[i][j]==0) continue;
				for(int k=0;k<6;k++)
				{
					if(a[i+d[k][0]][j+d[k][1]])
					{
						v[a[i][j]].push_back(a[i+d[k][0]][j+d[k][1]]);
					}
				}
			}
		}
		for(int i=1;i<=pntb;i++)
		{
			match[i]=0;
		}
		for(int i=1;i<=pnta;i++)
		{
			for(int j=1;j<=pntb;j++)
			{
				visited[j]=false;
			}
			if(f(i)) ans++;
		}
		printf("%d\n", pnta+pntb-ans);
	}
}