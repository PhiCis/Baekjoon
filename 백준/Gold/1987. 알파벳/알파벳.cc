#include<bits/stdc++.h>
using namespace std;

int n, m;
char a[30][30];

int d[4][2]={1, 0, 0, 1, -1, 0, 0, -1};
int chk[26];

int dfs(int i, int j)
{
	chk[a[i][j]-'A']=1;
	int res = 1;
	for(int k=0;k<4;k++)
	{
		if(i+d[k][0]>n||i+d[k][0]<=0||j+d[k][1]>m||j+d[k][1]<=0) continue;
		if(chk[a[i+d[k][0]][j+d[k][1]]-'A']==1) continue;
		res = max(res, 1+dfs(i+d[k][0], j+d[k][1]));
	}
	chk[a[i][j]-'A']=0;
//	printf("%d%d%d\n", i, j, res);
	return res;
}

int main()
{
	scanf("%d%d", &n, &m);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			scanf(" %c", &a[i][j]);
		}
	}
	printf("%d", dfs(1, 1));
}