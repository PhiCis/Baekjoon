#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long n;
	scanf("%lld", &n);
	while(n--)
	{
		long long a, c, d;
		char b;
		scanf("%lld", &a);
		scanf(" %c", &b);
		scanf("%lld = %lld", &c, &d);
		if(b=='+'&&a+c==d) printf("correct\n");
		else if(b=='-'&&a-c==d) printf("correct\n");
		else if(b=='*'&&a*c==d) printf("correct\n");
		else if(b=='/'&&a/c==d) printf("correct\n");
		else printf("wrong answer\n");
	}
}