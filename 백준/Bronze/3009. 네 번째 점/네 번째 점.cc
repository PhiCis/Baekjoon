#include<stdio.h>
int i, j, ansa, ansb, a[5], b[5];
int main()
{
	for(i=0;i<3;i++){
		scanf("%d%d", &a[i], &b[i]);
		ansa+=a[i]; ansb+=b[i];
		for(j=0;j<i;j++){
			if(a[j]==a[i]) ansa-=2*a[i];
			if(b[j]==b[i]) ansb-=2*b[i];
		}
	}
	printf("%d %d", ansa, ansb);
}