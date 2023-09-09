#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, x, y, sx, sy, ex, ey;
	scanf("%d", &n);
	scanf("%d%d", &x, &y);
	for(int i=1;i<=n;i++)
	{
		scanf("%d%d%d%d", &sx, &sy, &ex, &ey);
		if(sx<=x&&x<=ex&&sy<=y&&y<=ey)
		{
			printf("Yes");
			return 0;
		}
	}
	printf("No");
}