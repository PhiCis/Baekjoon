#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a, b, ans=0;
	scanf("%d%d", &a, &b);
	if(a>b) swap(a, b);
	for(int i=1;i<=1000;i++)
	{
		int tmpa=i*i/2;
		int tmpb=(i*i+1)/2;
		if(a>=tmpa&&b>=tmpb)
		{
			ans=i;
		}
	}
	if(ans==0)
	{
		printf("Impossible");
	}
	else
	{
		printf("%d", ans);
	}
}