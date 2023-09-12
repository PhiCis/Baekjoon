#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		long long a, b, c;
		cin>>a>>b>>c;
		cout<<min({a*a+(b+c)*(b+c), (a+c)*(a+c)+b*b, (a+b)*(a+b)+c*c})<<"\n";
	}
}