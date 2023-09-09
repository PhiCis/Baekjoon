#include<bits/stdc++.h>
using namespace std;

int main()
{
	while(1)
	{
		double a;
		int b, c;
		scanf("%lf%d%d", &a, &b, &c);
		if(a==0&&b==0&&c==0) return 0;
		int flag=0;
		if(a<=4.5&&b>=150&&c>=200)
		{
			flag=1;
			printf("Wide Receiver ");
		}
		if(a<=6.0&&b>=300&&c>=500)
		{
			flag=1;
			printf("Lineman ");
		}
		if(a<=5.0&&b>=200&&c>=300)
		{
			flag=1;
			printf("Quarterback ");
		}
		if(!flag)
		{
			printf("No positions");
		}
		printf("\n");
	}
}