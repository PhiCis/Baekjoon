#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		double a1, a2, a3, b1, b2, b3;
		scanf("%lf%lf%lf%lf%lf%lf", &a1, &a2, &a3, &b1, &b2, &b3);
		double c1 = a1*b2+a2*b3+a3*b1;
		double c2 = a2*b1+a3*b2+a1*b3;
		if(c1>c2) printf("ADAM\n");
		else if(c1<c2) printf("GOSIA\n");
		else printf("=\n");
	}
}