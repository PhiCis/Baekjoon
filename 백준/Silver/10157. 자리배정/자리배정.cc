#include<bits/stdc++.h>
using namespace std;
int c, r, k;
int pnt=1;
int a[1010][1010];
int x=1, y=0;
int main()
{
	scanf("%d%d%d", &c, &r, &k);
	for(int i=0;i<=c+1;i++)
	{
		a[i][0]=a[i][r+1]=-1;
	}
	for(int j=0;j<=r+1;j++)
	{
		a[0][j]=a[c+1][j]=-1;
	}
	for(int i=1;i<=600;i++)
	{
		while(1)
		{
			y++;
			if(a[x][y])
			{
				y--;
				break;
			}
			a[x][y]=pnt++;
		}
		while(1)
		{
			x++;
			if(a[x][y])
			{
				x--;
				break;
			}
			a[x][y]=pnt++;
		}
		while(1)
		{
			y--;
			if(a[x][y])
			{
				y++;
				break;
			}
			a[x][y]=pnt++;
		}
		while(1)
		{
			x--;
			if(a[x][y])
			{
				x++;
				break;
			}
			a[x][y]=pnt++;
		}
	}
	for(int i=1;i<=c;i++)
	{
		for(int j=1;j<=r;j++)
		{
			if(a[i][j]==k)
			{
				printf("%d %d", i, j);
				return 0;
			}
		}
	}
	printf("0");
}