#include<bits/stdc++.h>
using namespace std;

long long a, b;

int main()
{
	scanf("%lld%lld", &a, &b);
	if(a%2==0||b%2==0)
	{
		printf("0");
	}
	else
	{
		printf("%lld", min(a, b));
	}
}