#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, a, b, c;
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		printf("Case #%d: ", i);
		scanf("%d%d%d", &a, &b, &c);
		if(a*a+b*b==c*c) printf("YES");
		else if(a*a+c*c==b*b) printf("YES");
		else if(a*a==b*b+c*c) printf("YES");
		else printf("NO");
		printf("\n");
	}
}