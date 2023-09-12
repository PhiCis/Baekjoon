#include<bits/stdc++.h>
using namespace std;

int n, a[1100];

int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		if(a[i]<a[i-1])
		{
			cout<<"no";
			return 0;
		}
	}
	cout<<"yes";
	return 0;	
}