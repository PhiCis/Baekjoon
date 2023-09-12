#include<stdio.h>
int n;
int main()
{
	scanf("%d", &n);
	if(n==1)
	{
		printf("*");
		return 0;
	}
	for(int i=1;i<=4*n-1;i++)
	{
		if(i==2)
		{
			printf("*\n");
			continue;
		}
		for(int j=1;j<=4*n-3;j++)
		{
			if(j&1&&j<=i&&i+j<=4*n) printf("*");
			else if(i&1&&i+j>=4*n&&i-2>=j) printf("*");
			else if(j&1&&i-2<=j&&i+j>=4*n) printf("*");
			else if(i&1&&i+j<=4*n&&j>=i) printf("*");
			else printf(" ");
		}
		printf("\n");
	}
}