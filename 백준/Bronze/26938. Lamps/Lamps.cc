#include<bits/stdc++.h>
using namespace std;

int h, p;

int main()
{
	cin>>h>>p;
	for(int i=1;;i++)
	{
		if(5*((h*i-1)/1000+1)+60.0*h*i*p/100000>60*((h*i-1)/8000+1)+11.0*h*i*p/100000)
		{
			cout<<i;
			return 0;
		}
	}
}