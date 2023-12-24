#include<bits/stdc++.h>
using namespace std;

int a;
string b;

int main()
{
	cin>>a>>b;
	if(b=="miss") cout<<0;
	if(b=="bad") cout<<200*a;
	if(b=="cool") cout<<400*a;
	if(b=="great") cout<<600*a;
	if(b=="perfect") cout<<1000*a;
}