#include<bits/stdc++.h>
using namespace std;

double a, b;

int main()
{
	while(1)
	{
		cin>>a>>b;
		if(a==0&&b==0) return 0;
		a=(a*a+b*b)*3.14159265358979/100;
		cout<<"The property will be flooded in hour "<<ceil(a)<<".\n";
	}
}