#include<bits/stdc++.h>
using namespace std;
long long n;
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cout<<i*(n+1-i)<<"\n";
	}
}