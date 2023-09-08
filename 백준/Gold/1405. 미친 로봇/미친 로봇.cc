#include<bits/stdc++.h>
using namespace std;

int n;
double a[4];
int d[4][2]={1, 0, -1, 0, 0, -1, 0, 1};
bool m[40][40];
double ans;

void dfs(int x, int y, int k, double p)
{
	if(k==n)
	{
		ans+=p;
		return;
	}
	for(int i=0;i<4;i++)
	{
		if(!m[x+d[i][0]][y+d[i][1]])
		{
			m[x+d[i][0]][y+d[i][1]]=true;
			dfs(x+d[i][0], y+d[i][1], k+1, p*a[i]);
			m[x+d[i][0]][y+d[i][1]]=false;
		}
	}
}

int main()
{
	cin>>n;
	for(int i=0;i<4;i++)
	{
		cin>>a[i];
		a[i]/=100;
	}
	m[20][20]=true;
	dfs(20, 20, 0, 1.0);
	printf("%.10lf", ans);
}