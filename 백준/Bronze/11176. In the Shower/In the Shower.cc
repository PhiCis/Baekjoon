#include<bits/stdc++.h>
using namespace std;

int t;

int main()
{
	scanf("%d", &t);
	for(int i=1;i<=t;i++)
	{
		int e, n, a, ans=0;
		scanf("%d%d", &e, &n);
		for(int i=1;i<=n;i++)
		{
			scanf("%d", &a);
			if(a>e) ans++;
		}
		printf("%d\n", ans);
	}
}