#include<bits/stdc++.h>
using namespace std;

int a, b, c, d;

int main()
{
	cin>>a>>b>>c>>d;
	int h = a/(2*c);
	int w = b/(d*2);
	if(a%(2*c)>=c) h++;
	if(b%(d*2)>=d) w++;
	cout<<h*w;
}