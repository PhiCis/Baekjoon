#include<stdio.h>
int main()
{
	int n, i, tmp1, tmp2;
	scanf("%d", &n);
	for(i=1;i<n;i++){
		tmp1=tmp2=i;
		while(tmp2>0){
			tmp1+=tmp2%10;
			tmp2/=10;
		}
		if(n==tmp1){
			printf("%d", i);
			return 0;
		}
	}
	printf("0");
	return 0;
}