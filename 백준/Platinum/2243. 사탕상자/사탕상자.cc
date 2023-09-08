#include<stdio.h>
#define pow20 1048576
int a[3000000];
int main()
{
	int n;
	scanf("%d", &n);
	for(int i=0;i<n;i++)
	{
		int t, b, c;
		scanf("%d", &t);
		if(t==1)
		{
			scanf("%d", &b);
			int tmp=1;
			while(tmp<pow20)
			{
				if(b<=a[tmp*2])
				{
					tmp=tmp*2;
				}
				else
				{
					b-=a[tmp*2];
					tmp=tmp*2+1;
				}
			}
			printf("%d\n", tmp-pow20+1);
			a[tmp]--;
			while(tmp)
			{
				tmp>>=1;
				a[tmp]=a[2*tmp]+a[2*tmp+1];
			}
		}
		if(t==2)
		{
			scanf("%d%d", &b, &c);
			a[b+pow20-1]+=c;
			int tmp=b+pow20-1;
			while(tmp)
			{
				tmp>>=1;
				a[tmp]=a[2*tmp]+a[2*tmp+1];
			}
		}
	}
}