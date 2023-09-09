#include<bits/stdc++.h>
using namespace std;

int main()
{
	while(1)
	{
		int a, b, c;
		scanf("%d%d%d", &a, &b, &c);
		if(a==0&&b==0&&c==0) return 0;
		if(2*b==a+c)
		{
			printf("AP %d\n", c+(b-a));
		}
		else if(b*b==a*c)
		{
			printf("GP %d\n", c*(b/a));
		}
	}
}