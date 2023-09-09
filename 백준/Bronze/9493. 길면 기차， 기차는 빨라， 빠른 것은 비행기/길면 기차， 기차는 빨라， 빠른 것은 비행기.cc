#include<bits/stdc++.h>
using namespace std;

int main()
{
	while(1)
	{
		double a, b, c;
		scanf("%lf%lf%lf", &a, &b, &c);
		if(a==0&&b==0&&c==0)
		{
			return 0;
		}
		printf("%d:%02d:%02d\n", int(a/b-a/c), int(60.0*(a/b-a/c-int(a/b-a/c))), int(round(60.0*((60.0*(a/b-a/c))-int(60.0*(a/b-a/c))))));
	}
}