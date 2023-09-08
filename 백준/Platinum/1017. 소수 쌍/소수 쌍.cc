#include<bits/stdc++.h>
using namespace std;

bool m[2001];

int n, s[60];
int A[60], B[60]; //matching
int a[60], b[60], sza, szb; //values
vector<int> adj[60]; //adjacency
bool visited[60];
int match;
vector<int> ans;

void pre_prime()
{
	m[2]=true;
	for(int i=3;i<=2000;i+=2)
	{
		for(int j=3;j*j<=i;j+=2)
		{
			if(i%j==0) goto skip;
		}
		m[i]=true;
		skip:;
	}
}

void input()
{
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d", &s[i]);
	}
	if(s[1]&1)
	{
		for(int i=1;i<=n;i++)
		{
			if(s[i]&1)
			{
				a[++sza]=s[i];
			}
			else
			{
				b[++szb]=s[i];
			}
		}
	}
	else
	{
		for(int i=1;i<=n;i++)
		{
			if(s[i]&1)
			{
				b[++szb]=s[i];
			}
			else
			{
				a[++sza]=s[i];
			}
		}
	}
}

void calc()
{
	for(int i=1;i<=sza;i++)
	{
		for(int j=1;j<=szb;j++)
		{
			if(m[a[i]+b[j]])
			{
				adj[i].push_back(j);
			}
		}
	}
}

bool DFS(int a)
{
	visited[a]=true;
	for(int b:adj[a])
	{
		if(B[b]==0||visited[B[b]]==false&&DFS(B[b]))
		{
			A[a]=b;
			B[b]=a;
			return true;
		}
	}
	return false;
}

int main()
{
	pre_prime();
	input();
	calc();
	
retry:
	match = 0;
	for(int i=1;i<=sza;i++)
	{
		A[i]=0;
	}
	for(int i=1;i<=szb;i++)
	{
		B[i]=0;
	}
	for(int i=1;i<=sza;i++)
	{
		if(A[i]==0)
		{
			for(int i=1;i<=sza;i++)
			{
				visited[i]=false;
			}
			if(DFS(i)) match++;
		}
	}
	if(match == n/2)
	{
		ans.push_back(b[A[1]]);
		for(int i=0;i<adj[1].size();i++)
		{
			if(adj[1][i]==A[1])
			{
				adj[1].erase(adj[1].begin()+i);
			}
		}
		goto retry;
	}
	sort(ans.begin(), ans.end());
	if(ans.size()==0)
	{
		printf("-1");
	}
	else
	{
		for(auto i:ans)
		{
			printf("%d ", i);
		}
	}
	
}