#include<stdio.h>
int n, i, j, a[100], b[100], c[100];
int main()
{
	scanf("%d", &n);
	for(i=0;i<n;i++){
		c[i]=1;
		scanf("%d %d", &a[i], &b[i]);
		for(j=0;j<i;j++){
			if(a[i]>a[j]&&b[i]>b[j]) c[j]++;
			if(a[i]<a[j]&&b[i]<b[j]) c[i]++;
		}
	}
	for(i=0;i<n;i++){
		printf("%d ", c[i]);
	}
}