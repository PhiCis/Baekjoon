#include<bits/stdc++.h>
using namespace std;

long long t, n;

int main()
{
	cin>>t;
	for(int i=1;i<=t;i++)
	{
		cin>>n;
		cout<<i<<": "<<n<<" "<<n*(n+1)*(n+2)/6<<"\n";
	}
}