#include<bits/stdc++.h>
using namespace std;

int n, m, a[1010], s, ans[1010];
int ANS;

int main()
{
	scanf("%d%d", &n, &m);
	for(int i=1;i<=n;i++)
	{
		scanf("%d", &a[i]);
	}
	for(int i=1;i<=m;i++)
	{
		scanf("%d", &s);
		for(int j=1;j<=n;j++)
		{
			if(s>=a[j])
			{
				ans[j]++;
				break;
			}
		}
	}
	for(int i=1;i<=n;i++)
	{
		ANS = max(ANS, ans[i]);
	}
	for(int i=1;i<=n;i++)
	{
		if(ans[i]==ANS)
		{
			printf("%d", i);
			return 0;
		}
	}
}