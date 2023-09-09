#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long a, b;
	scanf("%lld%lld", &a, &b);
	if(a>(1ll<<b+1)-1) printf("no");
	else printf("yes");
}