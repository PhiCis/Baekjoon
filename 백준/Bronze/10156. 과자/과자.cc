#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	printf("%d", max(a*b-c, 0));
}