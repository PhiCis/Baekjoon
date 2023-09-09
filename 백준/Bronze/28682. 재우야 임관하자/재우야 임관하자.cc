#include<bits/stdc++.h>
using namespace std;

int n;
string a[1515];

int main()
{
	cin>>n;
	for(int i=1;i<=n;i++) cout<<"swimming ";
	cout<<"\n"<<flush;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++)
	{
		if(a[i]=="bowling") cout<<"soccer ";
		else cout<<"bowling ";
	}
	cout<<"\n"<<flush;
}