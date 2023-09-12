#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a, b, c, d, e, f;
	scanf("%d:%d:%d%d:%d:%d", &a, &b, &c, &d, &e, &f);
	a=a*3600+b*60+c;
	b=d*3600+e*60+f;
	b=(b-a+86399)%86400+1;
	printf("%02d:%02d:%02d", b/3600, b%3600/60, b%60);
}