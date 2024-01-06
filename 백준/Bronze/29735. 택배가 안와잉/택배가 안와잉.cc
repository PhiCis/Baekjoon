#include<bits/stdc++.h>
using namespace std;

int a, b, c, d, e, f;

int main()
{
	scanf("%d:%d%d:%d%d%d", &a, &b, &c, &d, &e, &f);
	e++;
	a=a*60+b;
	c=(c*60+d-1-a)/f;
	printf("%d\n", (e-1)/c);
	a+=((e-1)%c+1)*f;
	printf("%02d:%02d", a/60, a%60);
}