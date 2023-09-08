#include<stdio.h>
struct A{
	long long value;
	int s, e;
}a[3000000];
long long add(int k, int b, int c)
{
	if(b<=a[k].s&&a[k].e<=c) return a[k].value;
	if(b>a[k].e||a[k].s>c) return 0;
	return add(k*2, b, c)+add(k*2+1, b, c);
}
int main()
{
	int n, m, k;
	scanf("%d%d%d", &n, &m, &k);
	int tmp=n-1;
	int cnt=0;
	while(tmp)
	{
		tmp>>=1;
		cnt++;
	}
	tmp=(1<<cnt);
	for(int i=tmp;i<tmp+n;i++)
	{
		scanf("%lld", &a[i].value);
		a[i].s=a[i].e=i-tmp+1;
	}
	for(int i=tmp+n;i<2*tmp;i++)
	{
		a[i].s=a[i].e=i-tmp+1;
	}
	for(int i=tmp-1;i>0;i--)
	{
		a[i].value=a[2*i].value+a[2*i+1].value;
		a[i].s=a[2*i].s;
		a[i].e=a[2*i+1].e;
	}
	for(int i=0;i<m+k;i++)
	{
		int t;
		scanf("%d", &t);
		if(t==1)
		{
			int b;
			long long c;
			scanf("%d%lld", &b, &c);
			a[b+tmp-1].value=c;
			int tmp2=b+tmp-1;
			while(tmp2)
			{
				tmp2>>=1;
				a[tmp2].value=a[2*tmp2].value+a[2*tmp2+1].value;
			}
			/*for(int j=1;j<2*tmp;j++)
			{
				printf("%lld %d %d\n", a[j].value, a[j].s, a[j].e);
			}
			printf("\n");*/
		}
		if(t==2)
		{
			int b;
			int c;
			scanf("%d%d", &b, &c);
			printf("%lld\n", add(1, b, c));
		}
	}
}