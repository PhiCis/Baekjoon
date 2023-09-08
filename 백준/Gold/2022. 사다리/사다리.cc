#include<bits/stdc++.h>
using namespace std;
double x, y, c, s, e, m;
int t=100;
int main()
{
	scanf("%lf%lf%lf", &x, &y, &c);
	e=min(sqrt(x*x-c*c), sqrt(y*y-c*c));
	s=0;
	while(t--)
	{
		//printf("%lf %lf\n", s, e);
		m=(s+e)/2;
		double tmp=sqrt(y*y-m*m)/c-1.0;
		if(x*x<=m*m+(c*(1.0+1.0/tmp))*(c*(1.0+1.0/tmp)))
		{
			e=m;
		}
		else
		{
			s=m;
		}
	}
	printf("%lf", m);
}