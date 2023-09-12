#include<bits/stdc++.h>
using namespace std;

int a, b, c, d, e, f;
int main()
{
	scanf("%d%d%d%d%d%d", &a, &b, &c, &d, &e, &f);
	printf("%d", a+b+c+d+e+f-min(min(min(a, b), c), d)-min(e, f));
}