#include<stdio.h>
#include<math.h>
int m, n, i, flag, ans1, ans2;
int main()
{
	
	scanf("%d%d", &m, &n);
	for(i=m;i<=n;i++)
	{
		if(((int)sqrt(i))*((int)sqrt(i))==i)
		{
			if(flag==0)
			{
				flag++;
				ans2=i;
			}
			ans1+=i;
		}
	}
	if(flag==0)
	{
		printf("-1");
		return 0;
	}
	printf("%d\n%d", ans1, ans2);
}