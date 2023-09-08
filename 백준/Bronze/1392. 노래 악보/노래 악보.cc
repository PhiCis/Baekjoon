#include<bits/stdc++.h>
using namespace std;

int n, q, a[1010], t;

int main()
{
	scanf("%d%d", &n, &q);
	for(int i=1;i<=n;i++)
	{
		scanf("%d", &a[i]);
	}
	for(int i=1;i<=q;i++)
	{
		scanf("%d", &t);
		for(int j=1;j<=n;j++)
		{
			if(t-a[j]<0)
			{
				printf("%d\n",j);
				goto skip;
			}
			t-=a[j];
		}
		skip:;
	}
}