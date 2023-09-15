#include<bits/stdc++.h>
using namespace std;


int main()
{
	double a;
	int b, c;
	while(cin>>a>>b>>c)
	{
		if(a==0) return 0;
		if(b%10000==c%10000) a*=3000;
		else if(b%1000==c%1000) a*=500;
		else if(b%100==c%100) a*=50;
		else if((b+3)%100/4==(c+3)%100/4) a*=16;
		else a*=0;
		printf("%.2lf\n", a);
	}
}