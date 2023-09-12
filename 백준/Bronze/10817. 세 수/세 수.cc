#include<stdio.h>
int i, n, c[110], flag;
int main()
{
	for(i=0;i<3;i++){
		scanf("%d", &n);
		c[n]++;
	}
	for(i=1;i<=100;i++){
		if(c[i]>1){
			printf("%d", i);
			return 0;
		}
		if(c[i]==1){
			if(flag){
				printf("%d", i);
				return 0;
			}
			flag++;
		}
	}
}