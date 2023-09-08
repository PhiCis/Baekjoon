#include<bits/stdc++.h>
using namespace std;

long long x, y, w, s;

int main()
{
	scanf("%lld%lld%lld%lld", &x, &y, &w, &s);
	printf("%lld", min(s*(max(x, y)-(x+y)%2)+w*((x+y)%2), min(min(x, y)*s+abs(x-y)*w, (x+y)*w)));
}