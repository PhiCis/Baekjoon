#include<bits/stdc++.h>
using namespace std;

int n;
int main()
{
	cin>>n;
	cout<<(long long)(n-1)*(n-1)<<"\n";
	for(int i=2;i<=n;i++)
	{
		cout<<1<<" "<<i<<"\n";
	}
}