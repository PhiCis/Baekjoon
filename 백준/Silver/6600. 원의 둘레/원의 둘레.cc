#include<bits/stdc++.h>
using namespace std;

int main()
{
	double a, b, c, d, e, f;
	while(cin>>a>>b>>c>>d>>e>>f)
	{
		printf("%.2lf\n", 3.14159265358979323 * sqrt(((a-c)*(a-c)+(b-d)*(b-d))*((e-c)*(e-c)+(f-d)*(f-d))*((a-e)*(a-e)+(b-f)*(b-f))) / abs(a*d+c*f+e*b-b*c-d*e-f*a));
	}
}