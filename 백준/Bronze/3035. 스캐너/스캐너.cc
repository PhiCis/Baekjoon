#include<bits/stdc++.h>
using namespace std;

int a, b, c, d;
char A[1010][1010];

int main()
{
	scanf("%d%d%d%d", &a, &b, &c, &d);
	for(int i=0;i<a;i++)
	{
		for(int j=0;j<b;j++)
		{
			scanf(" %c", &A[i][j]);
		}
	}
	for(int i=0;i<a*c;i++)
	{
		for(int j=0;j<b*d;j++)
		{
			printf("%c", A[i/c][j/d]);
		}
		printf("\n");
	}
}