#include<bits/stdc++.h>
using namespace std;

int a, b, c, d, e, f;

int main()
{
	cin>>a>>d>>b>>e>>c>>f;
	cout<<a+b-c<<" "<<d+e-f<<"\n";
	cout<<a-b+c<<" "<<d-e+f<<"\n";
	cout<<-a+b+c<<" "<<-d+e+f<<"\n";
}