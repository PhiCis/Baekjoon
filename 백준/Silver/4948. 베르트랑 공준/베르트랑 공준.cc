#include<stdio.h>
#include<math.h>
int i, flag, j, a[100000], n, s, e, pnt;
int main()
{
	for(i=1;i<=123456*2;i++){
		flag=0;
		if((i==1||i%2==0)&&i!=2) continue;
		for(j=3;j<=sqrt(i);j+=2){
			if(i%j==0) flag=1;
		}
		if(flag==0){
			a[++pnt]=i;
		}
	}
	while(1){
		scanf("%d", &n);
		if(n==0) return 0;
		s=0;e=pnt;
		while(n>=a[s]) s++;
		while(2*n<a[e]) e--;
		printf("%d\n", e-s+1);
	}
}