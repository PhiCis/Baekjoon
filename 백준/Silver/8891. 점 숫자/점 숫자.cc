#include<bits/stdc++.h>
using namespace std;

int t, a, b;

pair<int, int> f(int a)
{
	int tmp=(int)(0.5+sqrt(0.25-2+2*a));
	int x=a-(tmp-1)*tmp/2;
	int y=tmp+1-x;
	return {x, y};
}

int g(int x, int y)
{
	return (x+y-2)*(x+y-1)/2+x;
}

int main()
{
	scanf("%d", &t);
	while(t--)
	{
		scanf("%d%d", &a, &b);
		printf("%d\n", g(f(a).first+f(b).first, f(a).second+f(b).second));
	}
}