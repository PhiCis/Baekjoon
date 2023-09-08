#include<stdio.h>
int main()
{
	unsigned int n, a[100], b, i, j, t;
	scanf("%d", &n);
	for(i=1;i<=n;i++){
		scanf("%u", &a[i]);
	}
	for(i=1;i<=n;i++){
		for(j=1;j<n;j++){
			if(a[j]>a[j+1]){
				t=a[j];a[j]=a[j+1];a[j+1]=t;
			}
		}
	}
	printf("%u", a[1]*a[n]);
 } 