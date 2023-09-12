#include<bits/stdc++.h>
using namespace std;

string a, b, c;
int d, e, f;
int main()
{
	cin>>a>>b>>c;
	if(a=="true") d=1;
	if(c=="true") e=1;
	if(b=="AND") f=d&e;
	else f=d|e;
	if(f) cout<<"true";
	else cout<<"false";
}