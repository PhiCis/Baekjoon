#include<stdio.h>
int a[20][200000];
int f(int I, int J, int m, int start, int end, int cnt)
{
	if(I<=start&&end<=J)
	{
		int tmps=start;
		int tmpe=end;
		while(tmps<=tmpe)
		{
			int tmpm=(tmps+tmpe)/2;
			if(a[cnt][tmpm]<=m)
			{
				tmps=tmpm+1;
			}
			else
			{
				tmpe=tmpm-1;
			}
		}
		return tmpe-start+1;
	}
	if(I>end||J<start) return 0;
	return f(I, J, m, start, (start+end)/2, cnt-1)+f(I, J, m, (start+end)/2+1, end, cnt-1);
}
void merge(int i, int j)
{
	int pnt1=j;
	int pnt2=j+(1<<(i-1));
	int pnt=j;
	while(pnt1<j+(1<<(i-1))&&pnt2<j+(1<<i))
	{
		if(a[i-1][pnt1]<a[i-1][pnt2])
		{
			a[i][pnt++]=a[i-1][pnt1++];
		}
		else
		{
			a[i][pnt++]=a[i-1][pnt2++];
		}
	}
	if(pnt1>=j+(1<<(i-1)))
	{
		while(pnt2<j+(1<<i))
		{
			a[i][pnt++]=a[i-1][pnt2++];
		}
	}
	else
	{
		while(pnt1<j+(1<<(i-1)))
		{
			a[i][pnt++]=a[i-1][pnt1++];
		}
	}
	return;
}
int main()
{
	int n, m;
	scanf("%d%d", &n, &m);
	int tmp=n-1;
	int cnt=0;
	while(tmp)
	{
		tmp>>=1;
		cnt++;
	}
	tmp=(1<<cnt);
	for(int i=1;i<=n;i++)
	{
		scanf("%d", &a[0][i]);
	}
	for(int i=n+1;i<=tmp;i++)
	{
		a[0][i]=2e9;
	}
	for(int i=1;i<=cnt;i++)
	{
		for(int j=1;j<=n;j+=(1<<i))
		{
			merge(i, j);
		}
	}
	/*for(int i=0;i<=cnt;i++)
	{
		for(int j=1;j<=n;j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}*/
	for(int i=1;i<=m;i++)
	{
		int I, J, K;
		scanf("%d%d%d", &I, &J, &K);
		int min=1e9;
		int s=-1e9;
		int e=1e9;
		while(s<=e)
		{
			int m=(s+e)/2;
			if(f(I, J, m, 1, tmp, cnt)>=K)
			{
				min=m;
				e=m-1;
			}
			else
			{
				s=m+1;
			}
		}
		printf("%d\n", min);
	}
}