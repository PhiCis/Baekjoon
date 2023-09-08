#include<stdio.h>
#include<string.h>
long long d, i, pnt, ans;
char a[100];
int main()
{
	scanf("%s", a);
	scanf("%lld", &d);
	pnt=1;
	for(i=strlen(a)-1;i>=0;i--)
	{
		if(a[i]>='A') ans+=pnt*(a[i]-55);
		else ans+=pnt*(a[i]-48);
		pnt*=d;
	}
	printf("%lld", ans);
}