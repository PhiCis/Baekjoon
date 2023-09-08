#include<stdio.h>
int a[3072][6215], n, cnt, tmp;

void f(int i, int j, int cnt, int k)
{
	if(cnt==0)
	{
		a[i][j+2]=1;
		a[i+1][j+1]=a[i+1][j+3]=1;
		a[i+2][j]=a[i+2][j+1]=a[i+2][j+2]=a[i+2][j+3]=a[i+2][j+4]=1;
		return;
	}
	f(i, j+k/2, cnt-1, k/2);
	f(i+k/2, j, cnt-1, k/2);
	f(i+k/2, j+k, cnt-1, k/2);
	return;
}

int main()
{
	scanf("%d", &n);
	tmp=n;
	while(!(tmp&1))
	{
		tmp>>=1;
		cnt++;
	}
	f(0, 0, cnt, n);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<2*n-1;j++)
		{
			if(a[i][j]) printf("*");
			else printf(" ");
		}
		printf("\n");
	}
}