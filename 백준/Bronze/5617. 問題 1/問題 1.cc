#include<bits/stdc++.h>
using namespace std;
int A, B, C, D;

int main()
{
	int a, b, c;
	while(cin>>a>>b>>c)
	{
		if(a<=c) swap(a, c);
		if(a<=b) swap(a, b);
		if(a>=b+c)
		{
			printf("%d %d %d %d\n", A, B, C, D);
			return 0;
		}
		A++;
		if(a*a==b*b+c*c) B++;
		else if(a*a>b*b+c*c) D++;
		else C++;
	}
	printf("%d %d %d %d\n", A, B, C, D);
	return 0;
}