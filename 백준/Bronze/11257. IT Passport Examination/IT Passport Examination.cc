#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	scanf("%d", &n);
	while(n--)
	{
		int a, b, c, d;
		scanf("%d%d%d%d", &a, &b, &c, &d);
		printf("%d %d ", a, b+c+d);
		if(b+c+d<55) printf("FAIL\n");
		else if(b<10.5 || c<7.5 || d<12) printf("FAIL\n");
		else printf("PASS\n");
	}
}