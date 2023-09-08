#include<bits/stdc++.h>
using namespace std;

int a[10][10];
map<int, int> m;
int d[4][2]={0, 1, 1, 0, -1, 0, 0, -1};

void f(int i, int j, int n, int ans)
{
	if(n==0){
		m[ans]=1;
		return;
	}
	for(int k=0;k<4;k++)
	{
		int ni = i+d[k][0];
		int nj = j+d[k][1];
		if(ni >= 1 && ni <= 5 && nj >= 1 && nj <= 5){
			f(ni, nj, n-1, ans*10+a[ni][nj]);
		}
	}
}

int main()
{
	for(int i=1;i<=5;i++)
	{
		for(int j=1;j<=5;j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	for(int i=1;i<=5;i++)
	{
		for(int j=1;j<=5;j++)
		{
			f(i, j, 5, a[i][j]);
		}
	}
	printf("%d", m.size());
}