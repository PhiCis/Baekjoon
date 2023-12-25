#include<bits/stdc++.h>
using namespace std;

long long n, f[50];
int main()
{
	f[1]=f[2]=1;
	for(int i=3;i<=42;i++)
	{
		f[i]=f[i-1]+f[i-2];
	}
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		int a;
		cin>>a;
		cout<<"Scenario "<<i<<":\n"<<f[a+2]<<"\n\n";
	}
}