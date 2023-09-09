#include<bits/stdc++.h>
using namespace std;

map<pair<int, int>, int> m;
int f(int a, int b)
{
	if(b==0||b==a) return 1;
	if(a==0) return 1;
	if(b==1||b==a-1) return a;
	if(m[{a, b}]) return m[{a, b}];
	return m[{a, b}]=f(a-1, b)+f(a-1, b-1);
}

int main()
{
	while(1)
	{
		int a, b;
		scanf("%d%d", &a, &b);
		if(a==0&&b==0) return 0;
		printf("%d\n", f(a, b));
	}
}