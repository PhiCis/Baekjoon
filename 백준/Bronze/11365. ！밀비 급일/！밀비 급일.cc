#include<stdio.h>
#include<string.h>
int main()
{
	while(1)
	{
		char a[550]={0};
		fgets(a, 550, stdin);
		if(!strcmp(a, "END\n")) break;
		for(int i=1;i<strlen(a);i++)
		{
			printf("%c", a[strlen(a)-1-i]);
		}
		printf("\n");
	}
}