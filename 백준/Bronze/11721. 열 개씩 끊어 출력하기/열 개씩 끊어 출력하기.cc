#include<stdio.h>
#include<string.h>
char a[110];
int main()
{
	scanf("%s", a);
	for(int i=0;i<strlen(a);i++)
	{
		printf("%c", a[i]);
		if(i%10==9) printf("\n");
	}
}