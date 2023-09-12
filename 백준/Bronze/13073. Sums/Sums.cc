#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, a;
	cin>>n;
	while(n--)
	{
		cin>>a;
		cout<<a*(a+1)/2<<" "<<a*a<<" "<<a*a+a<<"\n";
	}
}