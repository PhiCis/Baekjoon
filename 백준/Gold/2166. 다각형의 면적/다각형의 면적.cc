#include<stdio.h>
long long n, i, ans;
struct a{
	long long s, e;
}a[10010];
int main()
{
	scanf("%lld", &n);
	for(i=0;i<n;i++){
		scanf("%lld %lld", &a[i].s, &a[i].e);
	}
	a[n].s=a[0].s;
	a[n].e=a[0].e;
	for(i=0;i<n;i++){
		ans+=a[i].s*a[i+1].e;
		ans-=a[i].e*a[i+1].s;
	}
	if(ans<0) ans*=-1;
	printf("%.1lf", 0.5*ans);
}