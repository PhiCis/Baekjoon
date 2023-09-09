#include<stdio.h>
#include<algorithm>
using namespace std;
int l, a, b, c, d;
int main()
{
	scanf("%d %d %d %d %d", &l, &a, &b, &c, &d);
	printf("%d", l-max((a-1)/c,(b-1)/d)-1);
}