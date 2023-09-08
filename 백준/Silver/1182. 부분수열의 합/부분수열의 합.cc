#include<stdio.h>
int n, s, a[30], c[30], ans;
void if_ans()
{
	int flag=0;
	int tmp=0;
	for(int i=1;i<=n;i++)
	{
		if(c[i]) flag++;
		tmp+=c[i]*a[i];
	}
	if(flag&&tmp==s) ans++;
}
void f(int k)
{
	if(k>n)
	{
		if_ans();
		return;
	}
	c[k]=0;
	f(k+1);
	c[k]=1;
	f(k+1);
}
int main()
{
	scanf("%d%d", &n, &s);
	for(int i=1;i<=n;i++)
	{
		scanf("%d", &a[i]);
	}
	f(1);
	printf("%d", ans);
}