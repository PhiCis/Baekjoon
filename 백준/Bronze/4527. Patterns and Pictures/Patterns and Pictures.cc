#include<bits/stdc++.h>
using namespace std;

int n, t, a[11], b[11];
int main()
{
	cin>>t;
	while(t--)
	{
		int s=0;
		cin>>n;
		for(int i=1;i<=n;i++)
		{
			cin>>a[i]>>b[i];
			s+=a[i]*b[i];
		}
		cout<<36*36/s<<" "<<2*36*36/s<<" "<<3*36*36/s<<"\n";
	}
}