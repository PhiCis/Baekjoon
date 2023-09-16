#include<bits/stdc++.h>
using namespace std;
long long n, k, x, y, q, a;
int main()
{
	cin>>n>>k>>x>>y>>q;
	long long tmp=n/k*x+(n-n/k)*y;
	long long tmp2=(k-1)*y+x;
	while(q--)
	{
		cin>>a;
		a--;
		a%=tmp;
		cout<<a/tmp2*k+a%tmp2/y+1<<"\n";
	}
}