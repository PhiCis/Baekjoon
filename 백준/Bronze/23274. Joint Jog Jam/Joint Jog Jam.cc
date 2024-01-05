#include<bits/stdc++.h>
using namespace std;

double a, b, c, d, e, f, g, h;
int main()
{
	cin>>a>>b>>c>>d>>e>>f>>g>>h;
    cout.precision(10);
	cout<<sqrt(max((a-c)*(a-c)+(b-d)*(b-d), (e-g)*(e-g)+(f-h)*(f-h)));
}