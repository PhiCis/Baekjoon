#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	string s, t;
	scanf("%d", &n);
	while(n--)
	{
		cin>>s>>t;
		double a;
		scanf("%lf", &a);
		if(s=="H")
		{
			printf("%.2lf\n", -log10(a));
		}
		else
		{
			printf("%.2lf\n", 14+log10(a));
		}
		
	}
}