#include<bits/stdc++.h>
using namespace std;

int main()
{
	while(1)
	{
		int a, b, c, d;
		scanf("%d%d%d%d", &a, &b, &c, &d);
		if(a==0&&b==0&&c==0&&d==0) return 0;
		if(a==0) printf("%d %d %d %d\n", d/b/c, b, c, d);
		if(b==0) printf("%d %d %d %d\n", a, d/a/c, c, d);
		if(c==0) printf("%d %d %d %d\n", a, b, d/b/a, d);
		if(d==0) printf("%d %d %d %d\n", a, b, c, a*b*c);
	}
}