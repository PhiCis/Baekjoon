#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, m;
	scanf("%d%d",&n, &m);
	printf("%d", m-__gcd(n, m));
}