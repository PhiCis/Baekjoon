#include<stdio.h>
#include<string.h>
char a[1010];
int c[30];
int main()
{
	scanf("%s", a);
	for(int i=0;i<strlen(a);i++)
	{
		if(a[i]<='Z'&&a[i]>='A') printf("%c", a[i]);
	}
}