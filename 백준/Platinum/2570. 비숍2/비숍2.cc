#include<bits/stdc++.h>
using namespace std;

int n, k, a[110][110], b[110][110];
int pnta, pntb;
int A[11000], B[11000];
vector<int> adj[11000];
bool visited[11000];
int match;

bool DFS(int a)
{
	visited[a]=true;
	for(int b:adj[a])
	{
		if(B[b]==0||visited[B[b]]==false&&DFS(B[b]))
		{
			A[a]=b, B[b]=a;
			return true;
		}
	}
	return false;
}

int main()
{
	scanf("%d%d", &n, &k);
	for(int i=0;i<=n+1;i++)
	{
		a[i][0]=a[i][n+1]=a[0][i]=a[n+1][i]=-1;
		b[i][0]=b[i][n+1]=b[0][i]=b[n+1][i]=-1;
	}
	for(int i=1;i<=k;i++)
	{
		int x, y;
		scanf("%d%d", &x, &y);
		a[x][y]=b[x][y]=-1;
	}
	
	for(int i=2;i<=2*n;i++)
	{
		for(int j=max(1, i-n);j<=min(n, i-1);j++)
		{
			if(a[j][i-j]==-1) continue;
			pnta++;
			while(a[j][i-j]!=-1)
			{
				a[j][i-j]=pnta;
				j++;
			}
		}
	}
	/*
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	*/
	for(int i=2;i<=2*n;i++)
	{
		for(int j=max(1, i-n);j<=min(n, i-1);j++)
		{
			if(b[n+1-j][i-j]==-1) continue;
			pntb++;
			while(b[n+1-j][i-j]!=-1)
			{
				b[n+1-j][i-j]=pntb;
				j++;
			}
		}
	}
	/*
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			printf("%d ", b[i][j]);
		}
		printf("\n");
	}
	*/
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(a[i][j]!=-1)
			{
				adj[a[i][j]].push_back(b[i][j]);
			}
		}
	}
	for(int i=1;i<=pnta;i++)
	{
		if(A[i]==0)
		{
			for(int j=1;j<=pnta;j++)
			{
				visited[j]=false;
			}
			if(DFS(i)) match++;
		}
	}
	printf("%d", match);
}