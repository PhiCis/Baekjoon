#include<bits/stdc++.h>
using namespace std;

int a[11], s;

int main()
{
	for(int i=1;i<=10;i++)
	{
		cin>>a[i];
		s+=a[i];
	}
	cout<<s/2;
}