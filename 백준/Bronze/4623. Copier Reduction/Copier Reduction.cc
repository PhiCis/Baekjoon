#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a, b, c, d;
	while(1)
	{
		scanf("%d%d%d%d", &a, &b, &c, &d);
		if(a==0&&b==0&&c==0&&d==0) return 0;
		if(a>b) swap(a, b);
		if(c>d) swap(c, d);
		printf("%d%\n", min(100, min(c*100/a, d*100/b)));
	}
}