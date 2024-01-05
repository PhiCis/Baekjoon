#include<bits/stdc++.h>
using namespace std;

double a, b, c, d, e, f;

int main()
{
	cin>>a>>b>>c>>d;
	while(cin>>e>>f)
	{
		if(4*((a-e)*(a-e)+(b-f)*(b-f))<(c-e)*(c-e)+(d-f)*(d-f))
		{
			printf("The gopher can escape through the hole at (%.3lf,%.3lf).", e, f);
			return 0;
		}
	}
	cout<<"The gopher cannot escape.";
	return 0;
}