#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a, b, c, d, e, f;
	scanf("%d:%d:%d", &a, &b, &c);
	scanf("%d:%d:%d", &d, &e, &f);
	int ans = (d*3600+e*60+f-3600*a-60*b-c+86400)%86400;
	printf("%02d:%02d:%02d", ans/3600, ans%3600/60, ans%60);
}