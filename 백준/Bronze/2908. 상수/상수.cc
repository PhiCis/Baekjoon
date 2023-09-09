#include<stdio.h>
int a, b, A, B;
int main()
{
	scanf("%d%d",&a, &b);
	while(a>0){
		A*=10;
		A+=a%10;
		a/=10;
	}
	while(b>0){
		B*=10;
		B+=b%10;
		b/=10;
	}
	printf("%d", A<B?B:A);
}