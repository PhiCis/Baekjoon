#include<bits/stdc++.h>
using namespace std;

int e, f, c;
int ans;

int main()
{
	scanf("%d%d%d", &e, &f, &c);
	e+=f;
	while(e>=c)
	{
		ans+=e/c;
		e = e/c+e%c;
	}
	printf("%d", ans);
}