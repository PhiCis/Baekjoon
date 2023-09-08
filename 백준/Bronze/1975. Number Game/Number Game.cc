#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int a, ans=0;
		scanf("%d", &a);
		for(int i=2;i<=a;i++)
		{
			int tmp = a;
			while(tmp%i==0)
			{
				ans++;
				tmp/=i;
			}
		}
		printf("%d\n", ans);
	}
}