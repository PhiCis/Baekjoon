#include<bits/stdc++.h>
using namespace std;

long long n, a, b, c, d, e, f, x, y;
int main() 
{
	cin>>n;
	cin>>a>>b>>c>>d>>e>>f;
	cin>>x>>y;
	cout<<(a+x-1)/x+(b+x-1)/x+(c+x-1)/x+(d+x-1)/x+(e+x-1)/x+(f+x-1)/x<<"\n"<<n/y<<" "<<n%y;
}