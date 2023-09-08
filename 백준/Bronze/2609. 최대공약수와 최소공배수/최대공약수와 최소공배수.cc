#include<stdio.h>
int a, b;
int gcd(int a, int b){
	if(a<b){
		int t=a;a=b;b=t;
	}
	if(a%b==0) return b;
	else return gcd(b, a%b);
}
int main()
{
	scanf("%d %d", &a, &b);
	printf("%d\n%d", gcd(a,b), a/gcd(a,b)*b);
}