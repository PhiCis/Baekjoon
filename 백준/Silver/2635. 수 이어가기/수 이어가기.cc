#include<bits/stdc++.h>
using namespace std;

int n, ans, ansi;
int main()
{
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		int a=n, b=i;
		int cnt=2;
		while(1)
		{
			if(a<b)
			{
				if(ans<cnt)
				{
					ans=cnt;
					ansi=i;
				}
				break;
			}
			int tmp=a-b;
			a=b;
			b=tmp;
			cnt++;
		}
	}
	int a=n, b=ansi;
	printf("%d\n%d %d ", ans, a, b);
	while(1)
		{
			if(a<b)
			{
				return 0;
			}
			int tmp=a-b;
			a=b;
			b=tmp;
			printf("%d ", b);
		}
}