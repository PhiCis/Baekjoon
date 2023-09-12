#include<stdio.h>
#include<algorithm>
using namespace std;
int a, b, c, d;
int main()
{
	scanf("%d %d %d %d", &a, &b, &c, &d);
	printf("%d", min(b+c, a+d));
}