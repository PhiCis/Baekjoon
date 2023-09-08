#include<stdio.h>
int n, tmp, ans;
int main()
{
	while(1)
	{
		scanf("%d", &n);
		if(n==0) return 0;
		tmp=n; ans=0;
		while(tmp)
		{
			ans*=10;
			ans+=tmp%10;
			tmp/=10;
		}
		if(n==ans) printf("yes\n");
		else printf("no\n");
	}
}