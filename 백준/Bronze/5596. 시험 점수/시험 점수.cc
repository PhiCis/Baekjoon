#include<stdio.h>
#include<algorithm>
using namespace std;
int a, b, c, d, e, f, g, h;
int main()
{
	scanf("%d %d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &g, &h);
	printf("%d", max(a+b+c+d, e+f+g+h));
}