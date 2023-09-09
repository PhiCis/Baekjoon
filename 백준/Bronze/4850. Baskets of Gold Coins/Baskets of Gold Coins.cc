#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long a, b, c, d;
	while(cin>>a>>b>>c>>d)
	{
		cout<<(((a*(a-1)/2*b-d)/c)==0?a:((a*(a-1)/2*b-d)/c))<<"\n";
	}
}