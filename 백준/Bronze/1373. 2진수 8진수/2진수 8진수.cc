#include<stdio.h>
#include<string.h>
int pnt, cnt, ans[1000010];
char a[1000010];
int main()
{
	scanf("%s", a);
	pnt=strlen(a);
	while(pnt>=3)
	{
		ans[++cnt]=a[--pnt]+a[--pnt]*2+a[--pnt]*4-336;
	}
	if(pnt==2) ans[++cnt]=a[--pnt]+a[--pnt]*2-144;
	if(pnt==1) ans[++cnt]=a[--pnt]-48;
	while(cnt)
	{
		printf("%d", ans[cnt--]);
	}
}