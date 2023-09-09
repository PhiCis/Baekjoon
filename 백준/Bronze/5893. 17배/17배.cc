#include<stdio.h>
#include<string.h>
int i, len;
char a[1010];
int b[1010], c[1010], d[1010], flag;
int main()
{
	scanf("%s", a);
	len=strlen(a);
	for(i=0;i<len;i++)
	{
		b[len-i-1]=a[i]-'0';
		c[len-i+3]=a[i]-'0';
	}
	for(i=0;i<len+4;i++)
	{
		d[i]=b[i]+c[i];
	}
	for(i=0;i<len+4;i++)
	{
		if(d[i]>1){
			d[i+1]++;
			d[i]-=2;
		}
	}
	for(i=len+4;i>=0;i--)
	{
		if(d[i]!=0&&flag==0)
		{
			flag++;
		}
		if(flag)
		{
			printf("%d", d[i]);
		}
	}
	
}