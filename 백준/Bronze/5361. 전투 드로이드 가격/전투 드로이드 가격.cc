#include<bits/stdc++.h>
using namespace std;

double s[5]={350.34, 230.90, 190.55, 125.30, 180.90};

int main()
{
	int t, a, b, c, d, e;
	scanf("%d", &t);
	while(t--)
	{
		scanf("%d%d%d%d%d", &a,&b, &c, &d, &e);
		printf("$%.2lf\n", s[0]*a+s[1]*b+s[2]*c+s[3]*d+s[4]*e);
	}
}