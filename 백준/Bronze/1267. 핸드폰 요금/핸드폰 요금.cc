#include<bits/stdc++.h>
using namespace std;

int n, ans1, ans2;

int main()
{
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		int a;
		scanf("%d", &a);
		ans1+=(a+30)/30*10;
		ans2+=(a+60)/60*15;
	}
	if(ans1<=ans2)
	{
		printf("Y ");
	}
	
	if(ans1>=ans2)
	{
		printf("M ");
	}
	
	printf("%d", min(ans1, ans2));
}