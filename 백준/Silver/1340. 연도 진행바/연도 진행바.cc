#include<bits/stdc++.h>
using namespace std;

string a;
int b;
char c;
int d;
int e;
char f;
int g;
int h;
map<string, int> m;

int x[13]={0, 0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334};
int y[13]={0, 0, 31, 60, 91, 121, 152, 182, 213, 244, 274, 305, 335};

int main()
{
	m["January"]=1;
	m["February"]=2;
	m["March"]=3;
	m["April"]=4;
	m["May"]=5;
	m["June"]=6;
	m["July"]=7;
	m["August"]=8;
	m["September"]=9;
	m["October"]=10;
	m["November"]=11;
	m["December"]=12;
	cin>>a>>b>>c>>d>>e>>f>>g;
	h=m[a];
	if(d%400==0 || (d%100!=0 && d%4==0))
	{
		cout.precision(13);
		cout<<(y[h]-1+b+(double)e/24+(double)g/1440)/366*100;
	}
	else
	{
		cout.precision(13);
		cout<<(x[h]-1+b+(double)e/24+(double)g/1440)/365*100;
	}
}