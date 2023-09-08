#include<stdio.h>
int n, tmp, i=1;
int main()
{
	scanf("%d", &n);
	tmp=(n%10)*10+(n%10+n/10)%10;
	while(tmp!=n){
		tmp=(tmp%10)*10+(tmp%10+tmp/10)%10;
		i++;
	}
	printf("%d", i);
}