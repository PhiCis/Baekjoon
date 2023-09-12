#include<bits/stdc++.h>
using namespace std;

int t, n, m;
int main()
{
	scanf("%d", &t);
	while(t--)
	{
		int ans = 0;
		scanf("%d%d", &n, &m);
		for(int i=n;i<=m;i++)
		{
			if(i==0)
			{
				ans++;
				continue;
			}
			int tmp = i;
			while(tmp)
			{
				if(tmp%10==0) ans++;
				tmp/=10;
			}
		}
		printf("%d\n", ans);
	}
}