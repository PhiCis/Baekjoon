#include<bits/stdc++.h>
using namespace std;

int A[110][110];
int ans;

int main()
{
	int a, b, k;
	scanf("%d%d%d", &a, &b, &k);
	for(int i=1;i<=a;i++)
	{
		for(int j=1;j<=b;j++)
		{
			A[i][j]=1;
		}
	}
	for(int i=1;i<=k;i++)
	{
		int r, s, p, t;
		scanf("%d%d%d%d", &r, &s, &p, &t);
		for(int j=1;j<=a;j++)
		{
			for(int l=1;l<=b;l++)
			{
				if(t==0 && abs(r-j)<=p/2 && abs(s-l)<=p/2) A[j][l]=0;
				if(t==1 && (abs(r-j)>p/2 || abs(s-l)>p/2)) A[j][l]=0;
			}
		}
	}
	for(int i=1;i<=a;i++)
	{
		for(int j=1;j<=b;j++)
		{
			if(A[i][j]) ans++;
		}
	}
	printf("%d", ans);
}