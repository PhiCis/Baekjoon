#include<bits/stdc++.h>
using namespace std;

int n;
double a;
char b, c, d;

int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a>>b>>c>>d;
		if(b=='R') a*=0.55;
		if(b=='G') a*=0.70;
		if(b=='B') a*=0.80;
		if(b=='Y') a*=0.85;
		if(b=='O') a*=0.90;
		if(b=='W') a*=0.95;
		if(c=='C') a*=0.95;
		if(d=='C') printf("$%.1lf0\n", a-0.01);
		else printf("$%.2lf\n", a-0.001);
	}
}