#include<bits/stdc++.h>
using namespace std;

int t, n, l, h, a[110];

int main()
{
	scanf("%d" ,&t);
	for(int k=1;k<=t;k++)
	{
		printf("Case #%d: ", k);
		scanf("%d%d%d", &n, &l, &h);
		for(int i=1;i<=n;i++)
		{
			scanf("%d", &a[i]);
		}
		for(int i=l;i<=h;i++)
		{
			for(int j=1;j<=n;j++)
			{
				if(a[j]%i==0||i%a[j]==0) continue;
				goto skip;
			}
			printf("%d\n", i);
			goto skip2;
			skip:;
		}
		printf("NO\n");
		skip2:;
	}
}