#include<bits/stdc++.h>
using namespace std;

int n, a[1010][1010];

int main()
{
	scanf("%d", &n);
	if(n==2) printf("1 1\n");
	else
	{
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
			{
				scanf("%d", &a[i][j]);
			}
		}
		int A=a[1][2]+a[1][3]-a[2][3]>>1;
		printf("%d ", A);
		for(int i=2;i<=n;i++)
		{
			printf("%d ", a[1][i]-A);
		}
	}
}