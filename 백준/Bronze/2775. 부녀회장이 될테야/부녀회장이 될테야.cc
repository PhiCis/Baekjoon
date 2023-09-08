#include<stdio.h>
int c(int a, int b){
	if(a==b||b==0) return 1;
	if(a==b+1||b==1) return a;
	else return c(a-1, b-1)+c(a-1, b);
}
int n, i, k, t;
int main()
{
	scanf("%d", &t);
	for(i=0;i<t;i++){
		scanf("%d\n%d", &k, &n);
		printf("%d\n", c(n+k, k+1));
	}
}