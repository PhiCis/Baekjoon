#include<stdio.h>
#define MOD 1000000007LL
struct A{
	long long value;
	long long count;
	int s, e;
}a[600000];
long long addval(int k, int b, int c)
{
	if(b<=a[k].s&&a[k].e<=c) return a[k].value;
	if(b>a[k].e||a[k].s>c) return 0;
	return (addval(k*2, b, c)+addval(k*2+1, b, c))%MOD;
}
long long addcnt(int k, int b, int c)
{
	if(b<=a[k].s&&a[k].e<=c) return a[k].count;
	if(b>a[k].e||a[k].s>c) return 0;
	return (addcnt(k*2, b, c)+addcnt(k*2+1, b, c))%MOD;
}
int main()
{
	int n;
	scanf("%d", &n);
	for(int i=262144;i<524288;i++)
	{
		a[i].s=a[i].e=i-262144;
	}
	for(int i=262143;i>0;i--)
	{
		a[i].s=a[2*i].s; a[i].e=a[2*i+1].e;
	}
	int t;
	scanf("%d", &t);
	a[262144+t].count++;
	a[262144+t].value+=t;
	int tmp=262144+t;
	while(tmp)
	{
		tmp>>=1;
		a[tmp].count=(a[2*tmp].count+a[2*tmp+1].count)%MOD;
		a[tmp].value=(a[2*tmp].value+a[2*tmp+1].value)%MOD;
	}
	long long ans=1;
	for(int i=2;i<=n;i++)
	{
		
		scanf("%d", &t);
		long long tmp1=addval(1, t+1, 200000)%MOD+(((MOD-1)*addcnt(1, t+1, 200000)%MOD)*t)%MOD;
		long long tmp2=((addval(1, 0, t-1)%MOD)*(MOD-1))%MOD+(addcnt(1, 0, t-1)*t)%MOD;
		ans*=tmp1+tmp2;
		ans%=MOD;
		
		//printf("%lld %lld %lld \n",tmp1, tmp2, ans);
		a[262144+t].count++;
		a[262144+t].value+=t;
		a[262144+t].value%=MOD;
		tmp=262144+t;
		while(tmp)
		{
			tmp>>=1;
			a[tmp].count=(a[2*tmp].count+a[2*tmp+1].count)%MOD;
			a[tmp].value=(a[2*tmp].value+a[2*tmp+1].value)%MOD;
		}
	}
	printf("%lld", ans);
}