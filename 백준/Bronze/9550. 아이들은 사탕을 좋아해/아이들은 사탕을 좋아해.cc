#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n, k;
		scanf("%d%d", &n, &k);
		int c, ans = 0;
		for(int i=0;i<n;i++)
		{
			scanf("%d", &c);
			ans+=c/k;
		}
		printf("%d\n", ans);
	}
}