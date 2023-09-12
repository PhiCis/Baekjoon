#include<stdio.h>
#include<algorithm>
using namespace std;
int n, i, a, b, tmp, tmpa, tmpb;
int main()
{
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d", &a, &b);
		while(1)
		{
			tmp=b/a;
			if(a*tmp==b) break;
			tmp++;
			tmpb=b/__gcd(b, tmp)*tmp;
			tmpa=tmp/__gcd(b, tmp)*a-b/__gcd(b, tmp);
			a=tmpa;b=tmpb;
		}
		printf("%d\n", tmp);
	}
}