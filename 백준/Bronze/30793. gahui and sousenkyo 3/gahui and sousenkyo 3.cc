#include<bits/stdc++.h>
using namespace std;

double a, b;

int main()
{
	cin>>a>>b;
	if(a/b<0.2) cout<<"weak";
	else if(a/b<0.4) cout<<"normal";
	else if(a/b<0.6) cout<<"strong";
	else cout<<"very strong";
}