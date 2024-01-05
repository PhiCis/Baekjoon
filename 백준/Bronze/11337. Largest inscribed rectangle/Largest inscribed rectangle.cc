#include<bits/stdc++.h>
using namespace std;

int t;

int main()
{
	cin>>t;
	while(t--)
	{
		double a, b;
		cin>>a>>b;
		if(a*a*2<=b*b)
		{
			printf("%.3lf\n", a*a*2);
		}
		else
		{
			printf("%.3lf\n", 4*(b/2)*sqrt(a*a-(b/2)*(b/2)));
		}
	}
}