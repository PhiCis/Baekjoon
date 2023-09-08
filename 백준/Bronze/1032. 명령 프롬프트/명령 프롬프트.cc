#include<stdio.h>
#include<string.h>
int n, len;
char a[2][60];
int main()
{
	scanf("%d", &n);
	scanf(" %s", a[0]);
	len=strlen(a[0]);
	for(int i=1;i<n;i++)
	{
		scanf(" %s", a[1]);
		for(int j=0;j<len;j++)
		{
			if(a[0][j]!=a[1][j])
			{
				a[0][j]='?';
			}
		}
	}
	for(int i=0;i<len;i++)
	{
		printf("%c", a[0][i]);
	}
}