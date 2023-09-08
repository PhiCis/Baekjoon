#include<bits/stdc++.h>
using namespace std;

int n, a[1010], t, x, y;
int main()
{
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d", &a[i]);
	}
	scanf("%d", &t);
	while(t--)
	{
		scanf("%d%d", &x, &y);
		if(x==1)
		{
			for(int i=y;i<=n;i+=y)
			{
				a[i]=1-a[i];
			}
		}
		else
		{
			a[y]=1-a[y];
			int cnt=1;
			while(1)
			{
				if(y-cnt>0&&y+cnt<=n&&a[y-cnt]==a[y+cnt])
				{
					a[y-cnt]=1-a[y-cnt];
					a[y+cnt]=1-a[y+cnt];
					cnt++;
				}
				else break;
			}
		}
	}
	for(int i=1;i<=n;i++)
	{
		printf("%d ", a[i]);
		if(i%20==0) printf("\n");
	}
}