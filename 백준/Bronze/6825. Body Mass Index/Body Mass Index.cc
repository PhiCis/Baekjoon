#include<bits/stdc++.h>
using namespace std;

int main()
{
	double a, b;
	cin>>a>>b;
	a=a/b/b;
	if(a>25) cout<<"Overweight\n";
	else if(18.5<=a && a<=25) cout<<"Normal weight\n";
	else cout<<"Underweight\n";
}