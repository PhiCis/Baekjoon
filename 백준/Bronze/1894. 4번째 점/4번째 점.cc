#include<bits/stdc++.h>
using namespace std;

double a, b, c, d, e, f, g, h;

int main()
{
	while(cin>>a>>b>>c>>d>>e>>f>>g>>h)
	{
		if(a==e&&b==f) printf("%.3lf %.3lf\n", g+c-a, h+d-b);
		if(a==g&&b==h) printf("%.3lf %.3lf\n", e+c-a, f+d-b);
		if(c==e&&d==f) printf("%.3lf %.3lf\n", g+a-c, h+b-d);
		if(c==g&&d==h) printf("%.3lf %.3lf\n", e+a-c, f+b-d);
	}
}