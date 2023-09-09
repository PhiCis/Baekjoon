#include<bits/stdc++.h>
using namespace std;

int a[10];
int main()
{
	while(1)
	{
		int ans=0;
		for(int i=1;i<=6;i++)
		{
			scanf("%d", &a[i]);
		}
		for(int i=1;i<=6;i++)
		{
			if(a[i]) goto skip;
		}
		return 0;
		skip:;
		sort(a+1, a+7);
		for(int i=2;i<=5;i++)
		{
			ans+=a[i];
		}
		printf("%g\n", 0.25*ans);
	}
}