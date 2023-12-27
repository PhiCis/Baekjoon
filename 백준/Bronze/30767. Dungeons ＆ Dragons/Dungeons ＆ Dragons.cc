#include<bits/stdc++.h>
using namespace std;

long long a, b, c, d, e;

int main()
{
	cin>>a>>b>>c>>d>>e;
	b=a-b;
	c=a-c;
	swap(b, c);
	if(c<d||e<b) cout<<0;
	else cout<<min(c, e)-max(b, d)+1;
}