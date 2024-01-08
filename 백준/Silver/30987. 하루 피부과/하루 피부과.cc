#include<bits/stdc++.h>
using namespace std;

long long a, b, c, d, e, f, g;

int main()
{
	cin>>a>>b>>c>>d>>e>>f>>g;
	cout<<(c/3)*(b*b*b-a*a*a)+(d-f)/2*(b*b-a*a)+(e-g)*(b-a);
}