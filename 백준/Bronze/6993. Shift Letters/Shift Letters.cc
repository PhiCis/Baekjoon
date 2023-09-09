#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string a;
		int b;
		cin>>a>>b;
		cout<<"Shifting "<<a<<" by "<<b<<" positions gives us: ";
		for(int i=a.size()-b;i<2*a.size()-b;i++)
		{
			cout<<a[i%a.size()];
		}
		cout<<"\n";
	}
}