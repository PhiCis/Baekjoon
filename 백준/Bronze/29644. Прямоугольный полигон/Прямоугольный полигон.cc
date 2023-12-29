#include<bits/stdc++.h>
using namespace std;

int n, m;

int main()
{
	cin>>n>>m;
	if(m%2)
	{
		cout<<-1;
		return 0;
	}
	m/=2;
	for(int i=1;i<m;i++)
	{
		int j=m-i;
		if((long long)i*j==n)
		{
			cout<<j<<" "<<i;
			return 0;
		}
	}
	cout<<-1;
	return 0;
}