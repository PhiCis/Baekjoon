#include<bits/stdc++.h>
using namespace std;

int n ,h, m, s;
int a[10][10];

int main()
{
	scanf("%d", &n);
	while(n--)
	{
		scanf("%d:%d:%d", &h, &m, &s);
		for(int i=0;i<6;i++)
		{
			a[0][i]=(h>>i)&1;
		}
		for(int i=0;i<6;i++)
		{
			a[1][i]=(m>>i)&1;
		}
		for(int i=0;i<6;i++)
		{
			a[2][i]=(s>>i)&1;
		}
		for(int i=5;i>=0;i--)
		{
			for(int j=0;j<3;j++)
			{
				printf("%d", a[j][i]);
			}
		}
		printf(" ");
		for(int j=0;j<3;j++)
		{
			for(int i=5;i>=0;i--)
			{
				printf("%d", a[j][i]);
			}
		}
		printf("\n");
	}
}