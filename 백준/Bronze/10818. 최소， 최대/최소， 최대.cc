#include<stdio.h>
int n, a, i, max=-1000010, min=1000010;
int main()
{
	scanf("%d", &n);
	for(i=0;i<n;i++){
		scanf("%d", &a);
		if(min>a) min=a;
		if(max<a) max=a;
	}
	printf("%d %d",min, max);
}