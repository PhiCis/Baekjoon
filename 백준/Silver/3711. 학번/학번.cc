#include<bits/stdc++.h>
using namespace std;

int t, n, a[1010];

int main()
{
	scanf("%d", &t);
	while(t--)
	{
		scanf("%d", &n);
		for(int i=1;i<=n;i++)
		{
			scanf("%d", &a[i]);
		}
		int ans=n;
		while(1)
		{
			map<int, int> m;
			for(int i=1;i<=n;i++)
			{
				if(m[a[i]%ans])
				{
					ans++;
					goto skip;
				}
				m[a[i]%ans]=1;
			}
			printf("%d\n", ans);
			break;
			skip:;
		}
	}
}