#include<bits/stdc++.h>
using namespace std;

int main()
{
	int r, c, a, b;
	scanf("%d%d%d%d", &r, &c, &a, &b);
	for(int i=0;i<r*a;i++)
	{
		for(int j=0;j<c*b;j++)
		{
			if((i/a+j/b)&1) printf(".");
			else printf("X");
		}
		printf("\n");
	}
}