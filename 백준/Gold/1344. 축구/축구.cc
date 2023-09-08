#include<bits/stdc++.h>
using namespace std;

double a, b;
double A, B;
double c[20] = { 1, 18, 153, 816, 3060, 8568, 18564, 31824, 43758, 48620, 43758, 31824, 18564, 8568, 3060, 816, 153, 18, 1 };

double f(double x, int y)
{
	double tmp=c[y];
	for(int i=1;i<=y;i++)
	{
		tmp*=x;
	}
	for(int i=1;i<=18-y;i++)
	{
		tmp*=(1.0-x);
	}
	return tmp;
}

int main()
{
	scanf("%lf%lf", &a, &b);
	a/=100, b/=100;
	A=f(a, 0)+f(a, 1)+f(a, 4)+f(a, 6)+f(a, 8)+f(a, 9)+f(a, 10)+f(a, 12)+f(a, 14)+f(a, 15)+f(a, 16)+f(a, 18);
	B=f(b, 0)+f(b, 1)+f(b, 4)+f(b, 6)+f(b, 8)+f(b, 9)+f(b, 10)+f(b, 12)+f(b, 14)+f(b, 15)+f(b, 16)+f(b, 18);
	printf("%.15lf", (double)1.0-A*B);
}