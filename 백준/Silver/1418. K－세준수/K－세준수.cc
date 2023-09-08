#include<bits/stdc++.h>
using namespace std;

int n, k, p[100010], ans;

int main()
{
	scanf("%d%d", &n, &k);
	for(int i=1;i<=n;i++)
	{
		p[i]=i;
	}
	for(int i=2;i<=k;i+=2)
	{
		for(int j=1;j<=n;j++)
		{
			while(p[j]%i==0)
			{
				p[j]/=i;
			}
		}
		if(i==2) i--;
	}
	for(int i=1;i<=n;i++)
	{
		if(p[i]==1) ans++;
	}
	printf("%d", ans);
}