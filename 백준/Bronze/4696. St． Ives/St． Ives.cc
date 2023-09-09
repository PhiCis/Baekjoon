#include<bits/stdc++.h>
using namespace std;

int main()
{
	while(1)
	{
		double a;
		scanf("%lf", &a);
		if(!a) return 0;
		printf("%.2lf\n", 1.00+a+a*a+a*a*a+a*a*a*a);
	}
}