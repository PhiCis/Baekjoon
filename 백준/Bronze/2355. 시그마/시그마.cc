#include<bits/stdc++.h>
using namespace std;
long long a, b;

int main()
{
	scanf("%lld%lld",&a, &b);
	if(a<b) swap(a, b);
	printf("%lld", (a+1)*a/2-(b-1)*b/2);
}