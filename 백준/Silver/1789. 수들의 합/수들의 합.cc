#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long n, s=0;
	scanf("%lld", &n);
	for(long long i=1;;i++)
	{
		s+=i;
		if(s>n)
		{
			printf("%lld", i-1);
			return 0;
		}
	}
}