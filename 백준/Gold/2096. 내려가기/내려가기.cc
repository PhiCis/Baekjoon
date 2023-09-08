#include<bits/stdc++.h>
using namespace std;

int n, a[100010][4], dp1[2][4], dp2[2][4];
int main()
{
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=3;j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	for(int i=1;i<=n;i++)
	{
		dp1[i&1][1]=a[i][1]+max(dp1[(i-1)&1][1], dp1[(i-1)&1][2]);
		dp1[i&1][2]=a[i][2]+max(max(dp1[(i-1)&1][1], dp1[(i-1)&1][2]), dp1[(i-1)&1][3]);
		dp1[i&1][3]=a[i][3]+max(dp1[(i-1)&1][3], dp1[(i-1)&1][2]);
		dp2[i&1][1]=a[i][1]+min(dp2[(i-1)&1][1], dp2[(i-1)&1][2]);
		dp2[i&1][2]=a[i][2]+min(min(dp2[(i-1)&1][1], dp2[(i-1)&1][2]), dp2[(i-1)&1][3]);
		dp2[i&1][3]=a[i][3]+min(dp2[(i-1)&1][3], dp2[(i-1)&1][2]);
	}
	printf("%d %d", max(dp1[n&1][1], max(dp1[n&1][2], dp1[n&1][3])), min(dp2[n&1][1], min(dp2[n&1][2], dp2[n&1][3])));
}