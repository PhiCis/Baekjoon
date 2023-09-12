#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n;
		scanf("%d", &n);
		int ansa=0;
		double ansb=0;
		for(int i=1;i<=n;i++)
		{
			int a;
			double b;
			scanf("%d%lf", &a, &b);
			ansa+=a;
			ansb+=a*b;
		}
		printf("%d %lf\n", ansa, ansb/ansa);
	}
}