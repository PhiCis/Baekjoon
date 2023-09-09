#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a, b;
	int c[10]={1, 10, 100, 1000, 10000, 100000, 1000000, 10000000, 100000000, 1000000000};
	scanf("%d%d", &a, &b);
	if(b==0) printf("%d", a);
	else printf("%d", (a+5*c[b-1])/c[b]*c[b]);
}