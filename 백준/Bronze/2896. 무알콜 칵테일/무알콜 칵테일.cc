#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a, b, c, i, j, k;
	scanf("%d%d%d", &a, &b, &c);
	scanf("%d%d%d", &i, &j, &k);
	double m=min(min((double)a/i, (double)b/j),(double)c/k );
	printf("%.6lf %.6lf %.6lf", (double)a-m*i, (double)b-m*j, (double)c-m*k);
}