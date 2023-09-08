#include<bits/stdc++.h>
using namespace std;

int m[100];
int a;

int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a;
		m[a]++;
	}
	for(int i=n;i>=0;i--)
	{
		if(m[i]==i)
		{
			cout<<i;
			return 0;
		}
	}
	cout<<-1;
	return 0;
}