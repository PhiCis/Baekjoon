#include<stdio.h>
int n, i, j;
char a[400][400];
void f(int x, int y, int k){
	if(k==0) return;
	for(i=x;i<x+4*k-3;i++){
		a[i][y]='*';
		a[i][y+4*k-4]='*';
	}
	for(j=y+1;j<y+4*k-4;j++){
		a[x][j]='*';
		a[x+4*k-4][j]='*';
	}
	f(x+2, y+2, k-1);
}
int main()
{
	scanf("%d", &n);
	for(i=1;i<=4*n-3;i++)
	{
		for(j=1;j<=4*n-3;j++)
		{
			a[i][j]=' ';
		}
	}
	f(1, 1, n);
	for(i=1;i<=4*n-3;i++){
		for(j=1;j<=4*n-3;j++){
			printf("%c", a[i][j]);
		}
		printf("\n");
	}
}