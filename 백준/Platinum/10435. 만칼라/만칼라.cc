#include<stdio.h>
int n, pnt, flag, a[2222][2222], tmp, i, j, x, y, p[2222];
int main()
{
	a[1][1]=1;
	pnt=1;
	flag=2;
	for(i=2;i<=2221;i++){
		tmp=0;
		for(j=1;j<flag;j++){
			a[i][j]=a[i-1][j]-1;
			if(a[i][j]==0&&tmp==0) tmp=j;
		}
		a[i][flag]=flag;
		for(j=flag+1;j<=pnt;j++){
			a[i][j]=a[i-1][j];
			if(a[i][j]==0&&tmp==0) tmp=j;
		}
		if(flag>pnt) pnt=flag;
		flag=(tmp==0)?pnt+1:tmp;
		p[i]=pnt;
	}
	scanf("%d", &n);
	for(i=1;i<=n;i++){
		scanf("%d%d", &x, &y);
		printf("%d %d\n", x, p[y]);
		for(j=1;j<=p[y];j++){
			printf("%d ", a[y][j]);
			if(j%10==0) printf("\n");
		}
		if(j%10!=1) printf("\n");
	}
}