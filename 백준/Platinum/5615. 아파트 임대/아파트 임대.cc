#include<stdio.h>
#include<vector>
using namespace std;
unsigned long long alist[3]={2ULL, 7ULL, 61ULL};
 
// calculate x^y % m
unsigned long long powmod(unsigned long long x, unsigned long long y, unsigned long long m) {
    x %= m;
    unsigned long long r = 1ULL;
    while (y > 0) {
        if (y % 2 == 1)
            r = (r * x) % m;
        x = (x * x) % m;
        y /= 2;
    }
    return r;
}
 
// true for probable prime, false for composite
inline bool miller_rabin(unsigned long long n, unsigned long long a) {
    unsigned long long d = n - 1;
    while (d % 2 == 0) {
        if (powmod(a, d, n) == n-1)
            return true;
        d /= 2;
    }
    unsigned long long tmp = powmod(a, d, n);
    return tmp == n-1 || tmp == 1;
}
 
bool is_prime(unsigned long long n) {
    if (n <= 1)
        return false;
    if (n <= 10000ULL) {
        for (unsigned long long i = 2; i*i <= n; i++)
            if (n % i == 0)
                return false;
        return true;
    }
    for (unsigned long long i=0;i<3;i++)
        if (!miller_rabin(n, alist[i]))
            return false;
    return true;
}
unsigned long long n, a, ans, i;
int main()
{
	scanf("%llu", &n);
	for(i=0;i<n;i++)
	{
		scanf("%llu", &a);
		a=a*2+1;
		if(is_prime(a)) ans++;
	}
	printf("%llu", ans);
}