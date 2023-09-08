#include<bits/stdc++.h>
using namespace std;
int n, m;
vector<int> v[120];
bool visited[120];
int match[120];
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
	for(int i=1;i<=m;i++)
	{
		int a, b;
		scanf("%d%d", &a, &b);
		v[a].push_back(b);
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			visited[j]=false;
		}
		if(f(i)) ans++;
	}
	printf("%d", ans);
}