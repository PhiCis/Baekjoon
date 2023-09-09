#include<bits/stdc++.h>
using namespace std;

int main()
{
	double a = 0, b = 0;
	scanf("%lf", &a);
	while(1)
	{
		scanf("%lf", &b);
		if(b==999) return 0;
		printf("%.2lf\n", b-a);
		a = b;
	}
}