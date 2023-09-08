#include<bits/stdc++.h>
using namespace std;

int a, b, c, d;
int A[110][110];
int ans;

int main()
{
	for(int i=1;i<=4;i++)
	{
		scanf("%d%d%d%d", &a, &b, &c, &d);
		for(int j=a+1;j<=c;j++)
		{
			for(int k=b+1;k<=d;k++)
			{
				A[j][k]=1;
			}
		}
	}
	for(int i=1;i<=100;i++)
	{
		for(int j=1;j<=100;j++)
		{
			if(A[i][j]) ans++;
		}
	}
	printf("%d", ans);
}