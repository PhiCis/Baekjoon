#include<bits/stdc++.h>
using namespace std;

void f(long long n)
{
	if(n==0) return;
	f(n/2);
	if(n&1) printf("1");
	else printf("0");
}

int main()
{
	long long n;
	scanf("%lld", &n);
	f(n);
}