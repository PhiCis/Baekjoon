#include<stdio.h>
int n;
int a[1050][2050];
void f(int i, int k)
{
	if(k==1)
	{
		a[i][(1<<n)-2]=1;
	}
	else if(k&1)
	{
		for(int j=0;j<=(1<<k)-2;j++)
		{
			a[i+j][(1<<n)-2+j]=a[i+j][(1<<n)-2-j]=1;
			a[i+(1<<k)-2][(1<<n)-2+j]=a[i+(1<<k)-2][(1<<n)-2-j]=1;
		}
		f(i+(1<<k)-3, k-1);
	}
	else
	{
		for(int j=0;j<=(1<<k)-2;j++)
		{
			a[i-j][(1<<n)-2+j]=a[i-j][(1<<n)-2-j]=1;
			a[i-(1<<k)+2][(1<<n)-2+j]=a[i-(1<<k)+2][(1<<n)-2-j]=1;
		}
		f(i-(1<<k)+3, k-1);
	}
}
int main()
{
	scanf("%d", &n);
	if(n&1)
	{
		f(0, n);
		for(int i=0;i<(1<<n)-1;i++)
		{
			for(int j=0;j<(1<<(n+1))-3-((1<<n)-2)+i;j++)
			{
				printf("%c",a[i][j]?'*':' ');
			}
			printf("\n");
		}
	}
	else 
	{
		f((1<<n)-2, n);
		for(int i=0;i<(1<<n)-1;i++)
		{
			for(int j=0;j<(1<<(n+1))-3-i;j++)
			{
				printf("%c",a[i][j]?'*':' ');
			}
			printf("\n");
		}
	}
}