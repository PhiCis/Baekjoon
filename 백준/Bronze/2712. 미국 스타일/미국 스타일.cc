#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	scanf("%d", &n);
	while(n--)
	{
		double a;
		string s;
		scanf("%lf", &a);
		cin>>s;
		if(s=="kg")
		{
			printf("%.4lf lb\n", a*2.2046);
		}
		if(s=="lb")
		{
			printf("%.4lf kg\n", a*0.4536);
		}
		if(s=="g")
		{
			printf("%.4lf l\n", a*3.7854);
		}
		if(s=="l")
		{
			printf("%.4lf g\n", a*0.2642);
		}
	}
}