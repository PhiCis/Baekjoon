#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a, b, c, d, e, f;
	scanf("%d%d%d%d%d%d", &a, &b, &c, &d, &e, &f);
	for(int i=1;i<=a*b*c;i++)
	{
		if(i%a==d&&i%b==e&&i%c==f)
		{
			printf("%d", i);
			return 0;
		}
	}
	printf("-1");
}