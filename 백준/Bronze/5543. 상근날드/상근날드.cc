#include<stdio.h>
int i, a, min1=2100, min2=2100;
int main()
{
	for(i=0;i<3;i++){
		scanf("%d", &a);
		if(min1>a) min1=a;
	}
	for(i=0;i<2;i++){
		scanf("%d", &a);
		if(min2>a) min2=a;
	}
	printf("%d", min1+min2-50);
}