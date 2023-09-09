#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, a;
	double b, c, d, e;
	scanf("%d", &n);
	while(n--)
	{
		scanf("%d%lf%lf%lf%lf", &a, &b, &c, &d, &e);
		printf("%d %lf\n", a, (double)b/(c+d)*e);
	}
}