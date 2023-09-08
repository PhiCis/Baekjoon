#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
	int a, b, c, d, ans1, ans2;
	scanf("%d%d%d%d", &a, &b, &c, &d);
	ans1=a*d+b*c;ans2=b*d;
	printf("%d %d", ans1/__gcd(ans1, ans2), ans2/__gcd(ans1, ans2));
}