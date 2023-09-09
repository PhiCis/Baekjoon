#include<bits/stdc++.h>
using namespace std;

int main()
{
	double a, b, c;
	while(cin>>a>>b>>c)
	{
		int cnt=0;
		while(1)
		{
			if(a>=c)
			{
				printf("%d\n", cnt);
				break;
			}
			cnt++;
			a=a*(1.00+0.01*b);
		}
	}
}