#include<bits/stdc++.h>
using namespace std;

int main()
{
	while(1)
	{
	double a, b, c;
	scanf("%lf%lf%lf", &a, &b, &c);
	if(a==0&&b==0&&c==0) return 0;
	printf("Horizontal DPI: %.2lf\nVertical DPI: %.2lf\n", b/(a*16/sqrt(337)), c/(a*16/sqrt(337))*16/9);
	}
}