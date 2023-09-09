#include<bits/stdc++.h>
using namespace std;

int n, a[170], b[170], m[170][170];

int f(int x, int y) 
{
	if(b[y] < b[x]) swap(x, y);
	
	if(m[x][y] != -1) return m[x][y];
	
	m[x][y] = 0;
	for(int i=0;i<n;i++)
	{
		if(b[x]<=a[i] && i!=y)
		{
			m[x][y] = max(m[x][y], 1+f(i, y));
		}
	}

  return m[x][y];
}

int main() 
{
	scanf("%d", &n);
	for(int i=0;i<n;i++)
	{
		scanf("%d%d", &a[i], &b[i]);
	}
	a[n]=0;
	b[n]=0;
	for(int i=0;i<170;i++)
	{
		for(int j=0;j<170;j++)
		{
			m[i][j]=-1;
		}
	}
	f(n, n);
	printf("%d", m[n][n]);
}