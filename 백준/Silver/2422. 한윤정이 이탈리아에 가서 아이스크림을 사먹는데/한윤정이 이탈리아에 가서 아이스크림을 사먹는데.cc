#include<bits/stdc++.h>
using namespace std;

int n, m;
map<pair<int, int> , int> M;
int ans;
int a, b;

int main()
{
	scanf("%d%d", &n, &m);
	for(int i=1;i<=m;i++)
	{
		scanf("%d%d", &a, &b);
		if(a>b) swap(a, b);
		M[{a, b}]=1;
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=i+1;j<=n;j++)
		{
			for(int k=j+1;k<=n;k++)
			{
				if(M[{i, j}]||M[{i, k}]||M[{j, k}])
				{
					continue;
				}
				ans++;
			}
		}
	}
	printf("%d", ans);
}