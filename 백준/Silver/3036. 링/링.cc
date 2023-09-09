#include<stdio.h>
long long n, a[110], b[110], c[110];
long long gcd(long long x, long long y){
	if(x<y){
		long long t=x;x=y;y=t;
	}
	if(x%y==0) return y;
	else return gcd(y, x%y);
}
int main()
{
	scanf("%d", &n);
	for(int i=1;i<=n;i++){
		scanf("%lld", &a[i]);
	}
	b[0]=c[0]=1;
	for(int i=1;i<n;i++){
		b[i]=b[i-1]*a[i];
		c[i]=c[i-1]*a[i+1];
		long long tmp=gcd(b[i], c[i]);
		b[i]/=tmp;
		c[i]/=tmp;
		printf("%lld/%lld\n", b[i], c[i]);
	}
}