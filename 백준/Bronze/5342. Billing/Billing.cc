#include<bits/stdc++.h>
using namespace std;

int main()
{
	map<string, double> m;
	m["Paper"]=57.99;
	m["Printer"]=120.50;
	m["Planners"]=31.25;
	m["Binders"]=22.50;
	m["Calendar"]=10.95;
	m["Notebooks"]=11.20;
	m["Ink"]=66.95;
	double ans=0;
	string s;
	while(1)
	{
		cin>>s;
		if(s=="EOI") break;
		ans+=m[s];
	}
	printf("$%.2lf", ans);
}