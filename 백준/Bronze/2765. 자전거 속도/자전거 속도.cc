#include<bits/stdc++.h>
using namespace std;

int main()
{
	int cnt = 0;
	while(1)
	{
		cnt++;
		double a, c;
		int b;
		scanf("%lf%d%lf", &a, &b, &c);
		if(b==0) return 0;
		printf("Trip #%d: %.2lf %.2lf\n", cnt, a*3.1415927*b/12/5280, a*3.1415927*b/12/5280/c*3600);
	}
}