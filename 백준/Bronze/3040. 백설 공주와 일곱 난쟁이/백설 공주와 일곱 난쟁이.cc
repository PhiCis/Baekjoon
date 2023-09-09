#include<stdio.h>
#include<stdlib.h>
int compare(const void *x, const void *y){
	return *(int*)x-*(int*)y;
}
int i, a[30], sum, j, k;
int main()
{
	for(i=0;i<9;i++){
		scanf("%d", &a[i]);
		sum+=a[i];
	}
	qsort(a, 9, sizeof(int), compare);
	for(i=0;i<9;i++){
		for(j=0;j<9;j++){
			if(sum-a[i]-a[j]==100) goto skip;
		}
	}
	skip:
	for(k=0;k<9;k++){
		if(k==i||k==j) continue;
		printf("%d\n", a[k]);
	}
}