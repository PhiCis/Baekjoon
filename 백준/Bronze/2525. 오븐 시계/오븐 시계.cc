#include <stdio.h>
int main(){
	int n,m,a,num=0;
	scanf("%d %d\n%d",&n,&m,&a);
	num = n*60+m+a;
	if(num>=1440){
		num=num%1440;
	}
	printf("%d %d",num/60,num%60);
	return 0;
}