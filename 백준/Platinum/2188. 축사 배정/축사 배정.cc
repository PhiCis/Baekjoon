#include<bits/stdc++.h>
using namespace std;
int n, m, k, l;
vector<int> v[220];
bool visited[220];
int match[220];
int ans;

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
	scanf("%d%d", &n, &m);
	for(int i=1;i<=n;i++)
	{
		scanf("%d", &k);
		while(k--)
		{
			scanf("%d", &l);
			v[i].push_back(l);
		}
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			visited[j]=false;
		}
		if(f(i)) ans++;
	}
	printf("%d", ans);
}