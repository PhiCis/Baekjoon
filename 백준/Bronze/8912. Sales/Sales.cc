#include<bits/stdc++.h>
using namespace std;

int a[1010];
int main()
{
	int n, m;
	scanf("%d", &n);
	while(n--)
	{
		int ans=0;
		scanf("%d", &m);
		for(int i=1;i<=m;i++)
		{
			scanf("%d", &a[i]);
			for(int j=1;j<i;j++)
			{
				if(a[i]>=a[j]) ans++;
			}
		}
		printf("%d\n", ans);
	}
}