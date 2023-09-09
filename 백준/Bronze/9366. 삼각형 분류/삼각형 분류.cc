#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t, a, b, c;
	scanf("%d", &t);
	int cnt = 0;
	while(t--)
	{
		cnt++;
		scanf("%d%d%d", &a, &b, &c);
		printf("Case #%d: ", cnt);
		if(a+b<=c||a+c<=b||b+c<=a) printf("invalid!\n");
		else if(a==b&&b==c) printf("equilateral\n");
		else if(a==b||b==c||c==a) printf("isosceles\n");
		else printf("scalene\n");
	}
}