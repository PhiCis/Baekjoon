#include<stdio.h>
#include<string.h>
char a[1010];
int main()
{
	scanf("%s", a);
	for(int i=0;i<strlen(a)/2;i++)
	{
		if(a[i]!=a[strlen(a)-1-i])
		{
			printf("0");
			return 0;
		}
	}
	printf("1");
	return 0;
}