#include<stdio.h>
int n, i, ans, a, A[100100], pnt;
int main()
{
	scanf("%d", &n);
	for(i=0;i<n;i++){
		scanf("%d", &a);
		if(a) A[++pnt]=a;
		else A[pnt--]=0;
	}
	for(i=1;i<=pnt;i++){
		ans+=A[i];
	}
	printf("%d", ans);
}