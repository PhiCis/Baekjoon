#include<bits/stdc++.h>
using namespace std;

int n, m, a;
pair<int, int> v[1010];

int main()
{
	scanf("%d%d", &n, &m);
	
	for(int i=1;i<=m;i++)
	{
		v[i].second = i;
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			scanf("%d", &a);
			v[j].first-=a;
		}
	}
	
//	for(int j=1;j<=m;j++)
//	{
//		printf("%d ", v[j].first);
//	}
//	printf("\n");
	
	sort(v+1, v+m+1);
	for(int i=1;i<=m;i++)
	{
		printf("%d ", v[i].second);
	}
	printf("\n");
}