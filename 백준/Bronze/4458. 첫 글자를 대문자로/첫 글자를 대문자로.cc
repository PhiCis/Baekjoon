#include<stdio.h>
#include<string.h>
int n;
int main()
{
	scanf("%d\n", &n);
	for(int i=1;i<=n;i++)
	{
		char a[35]={0};
		fgets(a, 35, stdin);
		if(a[0]>='a') a[0]-=32;
		for(int j=0;j<strlen(a);j++) printf("%c", a[j]);
	}
}