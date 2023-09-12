#include<stdio.h>
char a[110][110];
int main()
{
	for(int i=0;i<5;i++)
	{
		scanf(" %s", a[i]);
	}
	for(int i=0;i<15;i++)
	{
		for(int j=0;j<5;j++)
		{
			if(a[j][i]) printf("%c", a[j][i]);
		}
	}
}