#include<stdio.h>
int i, j, a[130][130], ansa, ansb, n;
void f(int x, int y, int t){
	int A=0;
	for(i=x;i<x+t;i++){
		for(j=y;j<y+t;j++){
			A+=a[i][j];
		}
	}
	if(A==0){
		ansa++;
		return;
	}
	else if(A==t*t){
		ansb++;
		return;
	}
	else{
		f(x, y, t/2);
		f(x, y+t/2, t/2);
		f(x+t/2, y, t/2);
		f(x+t/2, y+t/2, t/2);
		return;
	}
}
int main()
{
	scanf("%d", &n);
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			scanf("%d", &a[i][j]);
		}
	}
	f(1, 1, n);
	printf("%d\n%d", ansa, ansb);
}