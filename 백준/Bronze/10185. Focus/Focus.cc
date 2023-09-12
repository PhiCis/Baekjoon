#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		double a, b;
		cin>>a>>b;
		printf("f = %.1lf\n", a*b/(a+b));
	}
}