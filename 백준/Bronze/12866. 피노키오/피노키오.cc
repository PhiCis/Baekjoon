#include<bits/stdc++.h>
using namespace std;

long long n;
map<char, long long> m;

int main()
{
	scanf("%lld", &n);
	for(long long i=1;i<=n;i++)
	{
		char c;
		scanf(" %c", &c);
		m[c]++;
	}
	printf("%lld", m['A']*m['C']%1000000007*m['G']%1000000007*m['T']%1000000007);
}