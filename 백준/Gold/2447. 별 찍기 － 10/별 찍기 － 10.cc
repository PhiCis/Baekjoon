#include<stdio.h>
int n;
char a[2200][2200];
void f(int x, int y, int n){
	for(int i=x+n/3;i<x+2*n/3;i++){
		for(int j=y+n/3;j<y+2*n/3;j++){
			a[i][j]=' ';
		}
	}
	if(n>3){
		f(x, y, n/3);
		f(x+n/3, y, n/3);
		f(x+2*n/3, y, n/3);
		f(x, y+n/3, n/3);
		f(x+2*n/3, y+n/3, n/3);
		f(x, y+2*n/3, n/3);
		f(x+n/3, y+2*n/3, n/3);
		f(x+2*n/3, y+2*n/3, n/3);
	}
}
int main()
{
	scanf("%d", &n);
	for(int x=1;x<=n;x++){
		for(int y=1;y<=n;y++){
			a[x][y]='*';
		}
	}
	f(1, 1, n);
	for(int x=1;x<=n;x++){
		for(int y=1;y<=n;y++){
			printf("%c", a[x][y]);
		}
		printf("\n");
	}
}