#include<stdio.h>
#include<math.h>
#include<algorithm>
using namespace std;
int a, b, i;
int main()
{
	scanf("%d%d", &a, &b);
	b/=a;
	for(i=(int)sqrt(b);i>0;i--)
	{
		if(b%i==0&&__gcd(i, b/i)==1)
		{
			printf("%d %d", i*a, b/i*a);
			return 0;
		}
	}
}