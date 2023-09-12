#include<bits/stdc++.h>
using namespace std;


int main()
{
	double a, b, c, d, e, f, g;
	cin>>a>>b>>c>>d>>e>>f>>g;
	double r = abs(a*d+c*f+e*b-a*f-c*b-e*d)/(sqrt((a-c)*(a-c)+(b-d)*(b-d))+sqrt((a-e)*(a-e)+(b-f)*(b-f))+sqrt((e-c)*(e-c)+(f-d)*(f-d)));
	cout<<(r-g)*100/g;
}