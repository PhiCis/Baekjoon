#include<bits/stdc++.h>
using namespace std;
int n;
double a, b;
double m=30, M=4000;
string s;
int main()
{
	cin>>n>>a;
	for(int i=1;i<n;i++)
	{
		cin>>b>>s;
		if(s=="closer")
		{
			if(a<b)
			{
				m=max(m, 0.5*(a+b));
			}
			else if(a>b)
			{
				M=min(M, 0.5*(a+b));
			}
		}
		else
		{
			if(a>b)
			{
				m=max(m, 0.5*(a+b));
			}
			else if(a<b)
			{
				M=min(M, 0.5*(a+b));
			}
		}
		a=b;
	}
	printf("%.10lf %.10lf", m, M);
}