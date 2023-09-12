#include<bits/stdc++.h>
using namespace std;

int main()
{
	while(1)
	{
		int a, b, c;
		scanf("%d%d%d", &a, &b, &c);
		if(a==0&&b==0&&c==0) return 0;
		a=a-b-c;
		int k=max(0, (a-b+c+2)/2);
		if(k>a) printf("-1\n");
		else printf("%d\n", k);
	}
}