#include<stdio.h>
#include<math.h>
long long int f(long long int k){
	double tmp=sqrt(k)+0.5;
	if(tmp-(long long int)tmp>0.5) return 2*(long long int)tmp;
	else return 2*(long long int)tmp-1;
}
long long t, i, x, y;
int main()
{
	scanf("%lld", &t);
	for(i=0;i<t;i++){
		scanf("%lld%lld", &x, &y);
		printf("%lld\n", x==y?0:f(y-x));
	}
}