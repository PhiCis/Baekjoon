#include<bits/stdc++.h>
using namespace std;

int n;
int a;
vector<int> v[30];
bool visited[30];
int match[30];
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
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			scanf("%d", &a);
			if(a==1)
			{
				v[i+j].push_back(i+n+1-j);
			}
		}
	}
	
	for(int i=2;i<=2*n;i++)
	{
		for(int j=2;j<=2*n;j++)
		{
			visited[j]=false;
		}
		if(f(i)) ans++;
	}
	/*
	for(int i=2;i<=2*n;i++)
	{
		printf("%d %d\n", match[i], i);
	}
	*/
	printf("%d", ans);
}