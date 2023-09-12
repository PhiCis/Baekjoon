#include<stdio.h>
int n, a, A[300];
int main()
{
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d", &a);
		A[a+100]++;
	}
	scanf("%d", &a);
	printf("%d", A[a+100]);
}