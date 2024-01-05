#include<bits/stdc++.h>
using namespace std;

double a, b, c, d, e, f;
int main()
{
	cin>>a>>b>>c>>d>>e>>f;
	cout.precision(10);
	if(a<c)
	{
		if(b<d)
		{
			cout<<sqrt((a-c)*(a-c)+(b-d)*(b-d));
		}
		else if(b<f)
		{
			cout<<c-a;
		}
		else
		{
			cout<<sqrt((a-c)*(a-c)+(b-f)*(b-f));
		}
	}
	else if(a<e)
	{
		if(b<d)
		{
			cout<<d-b;
		}
		else
		{
			cout<<b-f;
		}
	}
	else
	{
		if(b<d)
		{
			cout<<sqrt((a-e)*(a-e)+(b-d)*(b-d));
		}
		else if(b<f)
		{
			cout<<a-e;
		}
		else
		{
			cout<<sqrt((a-e)*(a-e)+(b-f)*(b-f));
		}
	}
}