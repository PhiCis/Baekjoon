#include<bits/stdc++.h>
using namespace std;

int T, n, a[100010], chk[100010];

void f(int i)
{
	chk[i]=1;
	if(chk[a[i]]>=2)
	{
		chk[i]=3;
		return;
	}
	if(chk[a[i]]==1)
	{
		while(chk[a[i]]==1)
		{
			chk[a[i]]=2;
			i = a[i];
		}
		return;
	}
	if(chk[a[i]]==0)
	{
		f(a[i]);
		if(chk[i]==1)
		{
			chk[i]=3;
		}
	}
}
int main()
{
	scanf("%d", &T);
	while(T--)
	{
		int ans = 0;
		scanf("%d", &n);
		for(int i=1;i<=n;i++)
		{
			scanf("%d", &a[i]);
			chk[i]=0;
		}
		for(int i=1;i<=n;i++)
		{
			if(chk[i]==0)
			{
				f(i);
			}
			
//			for(int j=1;j<=n;j++)
//			{
//				printf("%d ", chk[j]);
//			}
//			printf("\n");
			
		}
		for(int i=1;i<=n;i++)
		{
			if(chk[i]==3) ans++;
		}
		printf("%d\n", ans);
	}
}