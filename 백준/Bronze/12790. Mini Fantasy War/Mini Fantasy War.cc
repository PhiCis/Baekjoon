#include<bits/stdc++.h>
using namespace std;

int t, a, b, c, d, e, f, g, h;

int main()
{
	scanf("%d", &t);
	while(t--)
	{
		scanf("%d%d%d%d%d%d%d%d", &a, &b, &c, &d, &e, &f, &g, &h);
		printf("%d\n", 1*max(1, a+e)+5*max(1, b+f)+2*max(0, c+g)+2*(d+h));
	}
}