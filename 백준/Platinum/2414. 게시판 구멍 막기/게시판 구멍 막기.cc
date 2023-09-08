#include<bits/stdc++.h>
using namespace std;

int r, c;
char m[60][60];
int a[60][60];
int b[60][60];
int pnta, pntb;
vector<int> v[2600];
int ans;
int match[2600];
bool visited[2600];

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
	scanf("%d%d", &r, &c);
	for(int i=1;i<=r;i++)
	{
		for(int j=1;j<=c;j++)
		{
			scanf(" %c", &m[i][j]);
		}
	}
	for(int i=1;i<=r;i++)
	{
		for(int j=1;j<=c;j++)
		{
			if(m[i][j]=='.') continue;
			if(m[i][j-1]!='*')
			{
				a[i][j]=++pnta;
			}
			else
			{
				a[i][j]=a[i][j-1];
			}
		}
	}
	for(int j=1;j<=c;j++)
	{
		for(int i=1;i<=r;i++)
		{
			if(m[i][j]=='.') continue;
			if(m[i-1][j]!='*')
			{
				b[i][j]=++pntb;
			}
			else
			{
				b[i][j]=b[i-1][j];
			}
		}
	}
	for(int i=1;i<=r;i++)
	{
		for(int j=1;j<=c;j++)
		{
			if(m[i][j]=='*')
			{
				v[a[i][j]].push_back(b[i][j]);
			}
		}
	}
	
	for(int i=1;i<=pnta;i++)
	{
		for(int j=1;j<=pntb;j++)
		{
			visited[j]=false;
		}
		if(f(i)) ans++;
	}
	
	printf("%d", ans);
}