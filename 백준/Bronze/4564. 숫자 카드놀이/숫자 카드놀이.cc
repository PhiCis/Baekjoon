#include<bits/stdc++.h>
using namespace std;
int n;

int main()
{
	while(1)
	{
		scanf("%d", &n);
		if(!n) return 0;
		while(n>=10)
		{
			printf("%d ", n);
			int tmp = 1;
			while(n)
			{
				tmp*=n%10;
				n/=10;
			}
			n = tmp;
		}
		printf("%d\n", n);
	}
}