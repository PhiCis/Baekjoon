#include<bits/stdc++.h>
using namespace std;

int n, m, a[10][10];
int ans=-1;

bool f(int x)
{
	int tmp=(int)sqrt(x);
	if((tmp-1)*(tmp-1)==x||tmp*tmp==x||(tmp+1)*(tmp+1)==x) return 1;
	else return 0;
}

int main()
{
	scanf("%d%d", &n, &m);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			scanf("%1d", &a[i][j]);
		}
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			if(f(a[i][j])&&a[i][j]>ans) ans=a[i][j];
			for(int k=-9;k<=9;k++)
			{
				for(int l=-9;l<=9;l++)
				{
					if(k==0&&l==0) continue;
					int x=i, y=j;
					int tmp=a[x][y];
					while(x+k>0&&x+k<=n&&y+l>0&&y+l<=m)
					{
						x+=k, y+=l;
						tmp*=10;
						tmp+=a[x][y];
						if(f(tmp)&&tmp>ans) ans=tmp;
					}
				}
			}
		}
	}
	printf("%d", ans);
}