#include<stdio.h>
#include<math.h>
int a, b, i, flag, j;
int main()
{
	scanf("%d%d", &a, &b);
	for(i=a;i<=b;i++){
		flag=0;
		if((i==1||i%2==0)&&i!=2) continue;
		for(j=3;j<=sqrt(i);j+=2){
			if(i%j==0) flag=1;
		}
		if(flag==0){
			printf("%d\n", i);
		}
	}
}