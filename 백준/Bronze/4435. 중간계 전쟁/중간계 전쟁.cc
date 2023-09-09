#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	scanf("%d", &t);
	for(int i=1;i<=t;i++)
	{
		int a, b, c, d, e, f, g, A, B;
		scanf("%d%d%d%d%d%d", &a, &b, &c, &d, &e, &f);
		A = a+2*b+3*c+3*d+4*e+10*f;
		scanf("%d%d%d%d%d%d%d", &a, &b, &c, &d, &e, &f, &g);
		B = a+2*b+2*c+2*d+3*e+5*f+10*g;
		if(A>B)
		{
			printf("Battle %d: Good triumphs over Evil\n", i);
		}
		else if(A<B)
		{
			printf("Battle %d: Evil eradicates all trace of Good\n", i);
		}
		else
		{
			printf("Battle %d: No victor on this battle field\n", i);
		}
	}
}