#include<bits/stdc++.h>
using namespace std;

int main()
{
	while(1)
	{
		long long a, b, c, d, e;
		scanf("%lld%lld%lld%lld%lld", &a, &b, &c, &d, &e);
		if(a==0) return 0;
		printf("%.2lf ", atan2(b*e, a*d)*180.00/3.1415926535897932384);
		printf("%.2lf\n", sqrt(a*a*d*d+b*b*e*e)/c); 
	}
	
}