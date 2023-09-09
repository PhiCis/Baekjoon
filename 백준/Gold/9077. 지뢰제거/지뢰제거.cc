#include<bits/stdc++.h>
using namespace std;
vector<vector<int> > v(10011, vector<int>(10011));

int main()
{
	int t, n;
	scanf("%d", &t);
	while(t--)
	{
		scanf("%d", &n);
		
		for(int i=0;i<n;i++)
		{
			int x, y;
			scanf("%d%d", &x, &y);
			for(int j=0;j<=10;j++)
			{
				for(int k=0;k<=10;k++)
				{
					v[x+j][y+k]++;
				}
			}
		}
		int ans = 0;
		for(int i=0;i<=10000;i++)
		{
			for(int j=0;j<=10000;j++)
			{
				ans = ans<v[i][j]?v[i][j]:ans;
				v[i][j]=0;
			}
		}
		printf("%d\n", ans);
	}
}