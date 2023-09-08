#include<stdio.h>
int max, maxi, i, a;
int main()
{
	for(i=1;i<=9;i++){
		scanf("%d", &a);
		if(a>max){
			max=a;
			maxi=i;
		}
	}
	printf("%d\n%d", max, maxi);
}