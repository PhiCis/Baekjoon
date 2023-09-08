#include<bits/stdc++.h>
using namespace std;

int x[1010], y[1010], z[1010];

int d[6][3]={1, 0, 0, -1, 0, 0, 0, 1, 0, 0, -1, 0, 0, 0, 1, 0, 0, -1};

int main()
{
	int t, n;
	scanf("%d", &t);
	while(t--)
	{
		map<vector<int>, int> m;
		scanf("%d", &n);
		int ans=6;
		for(int i=1;i<=n;i++)
		{
			scanf("%d,%d,%d", &x[i], &y[i], &z[i]);
		}
		m[{x[1], y[1], z[1]}]=1;
		for(int i=2;i<=n;i++)
		{
			if(m[{x[i], y[i], z[i]}])
			{
				printf("NO %d\n", i);
				goto skip;
			}
			int flag = 0;
			for(int j=0;j<6;j++)
			{
				if(m[{x[i]+d[j][0], y[i]+d[j][1], z[i]+d[j][2]}])
				{
					flag++;
				}
			}
			if(flag==0)
			{
				printf("NO %d\n", i);
				goto skip;
			}
			else
			{
				m[{x[i], y[i], z[i]}]=1;
				ans+=6-2*flag;
			}
		}
		printf("%d\n", ans);
		skip:;
	}
}