#include<bits/stdc++.h>
using namespace std;
int a, b;
char A[2]={'*', '.'};

int main()
{
	scanf("%d%d", &a, &b);
	for(int i=1;i<=a;i++)
	{
		for(int j=1;j<=b;j++)
		{
			printf("%c", A[(i+j)&1]);
		}
		printf("\n");
	}
}