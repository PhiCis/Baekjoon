#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	long long a, b, c, d;
	scanf("%d", &n);
	while(n--)
	{
		scanf("%lld%lld%lld%lld", &a, &b, &c, &d);
		if(a+b*d<b*c) printf("parallelize\n");
		else if(a+b*d>b*c) printf("do not parallelize\n");
		else printf("does not matter\n");
	}
}