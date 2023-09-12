#include<stdio.h>
int n;
double a;
int main()
{
	scanf("%d", &n);
	for(int i=0;i<n;i++)
	{
		scanf("%lf", &a);
		printf("$%.2lf\n", a*0.8);
	}
}