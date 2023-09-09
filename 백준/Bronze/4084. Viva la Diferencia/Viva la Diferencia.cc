#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a, b, c, d;
	while(1)
	{
		scanf("%d%d%d%d", &a, &b, &c, &d);
		if(a==0&&b==0&&c==0&&d==0) return 0;
		int tmp=0;
		while(!(a==b&&b==c&&c==d))
		{
			tmp++;
			int e=abs(a-b), f=abs(b-c), g=abs(c-d), h=abs(d-a);
			a=e, b=f, c=g, d=h;
		}
		printf("%d\n", tmp);
	}
}