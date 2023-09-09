#include<stdio.h>
struct A{
	int value;
	int s, e;
}a[3000000];
int c[100010];
int add(int k, int b, int c)
{
	if(b<=a[k].s&&a[k].e<=c) return a[k].value;
	if(b>a[k].e||a[k].s>c) return 0;
	return add(k*2, b, c)+add(k*2+1, b, c);
}
int main()
{
	int t, n, m;
	scanf("%d", &t);
	for(int i=0;i<t;i++)
	{
		scanf("%d%d", &n, &m);
		int tmp=n+m-1;
		int cnt=0;
		while(tmp)
		{
			tmp>>=1;
			cnt++;
		}
		tmp=(1<<cnt);
		for(int j=tmp;j<tmp+m;j++) 
		{
			a[j].value=0;
			a[j].s=a[j].e=j-tmp;
		}
		for(int j=tmp+m;j<tmp+m+n;j++)
		{
			a[j].value=1; 
			a[j].s=a[j].e=j-tmp;
			c[j-tmp-m+1]=j-tmp;
		} 
		for(int j=tmp+m+n;j<2*tmp;j++)
		{
			a[j].value=0;
			a[j].s=a[j].e=j-tmp;
		}
		for(int j=tmp-1;j>0;j--) 
		{
			a[j].value=a[j*2].value+a[j*2+1].value;
			a[j].s=a[j*2].s;
			a[j].e=a[j*2+1].e;
		}
		for(int j=1;j<=m;j++)
		{
			int p, tmp2;
			/*for(int k=1;k<16;k++) printf("%d ", a[k].value);
			printf("\n");*/
			scanf("%d", &p);
			printf("%d ", add(1, 0, c[p]-1));
			tmp2=c[p]+tmp;
			a[tmp2].value--;
			while(tmp2)
			{
				tmp2>>=1;
				a[tmp2].value--;
			}
			c[p]=m-j;
			tmp2=c[p]+tmp;
			a[tmp2].value++;
			while(tmp2)
			{
				tmp2>>=1;
				a[tmp2].value++;
			}
		}
		printf("\n");
	}
}