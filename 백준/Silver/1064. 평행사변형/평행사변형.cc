#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a, b, c, d, e, f;
	scanf("%d%d%d%d%d%d", &a, &b, &c, &d, &e, &f);
	if((b-d)*(a-e)==(b-f)*(a-c))
	{
		printf("-1");
		return 0;
	}
	double x[3];
	x[0]=sqrt((a-c)*(a-c)+(b-d)*(b-d));
	x[1]=sqrt((a-e)*(a-e)+(b-f)*(b-f));
	x[2]=sqrt((e-c)*(e-c)+(f-d)*(f-d));
	sort(x, x+3);
	printf("%.15lf", 2*(x[2]-x[0]));
}