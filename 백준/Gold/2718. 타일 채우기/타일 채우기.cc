//a(n-1) + 5*a(n-2) + a(n-3) - a(n-4).
#include<bits/stdc++.h>
using namespace std;

long long f[30];
int t, n;

int main()
{
	f[0]=1, f[1]=1, f[2]=5, f[3]=11;
	for(int i=4;i<30;i++)
	{
		f[i]=f[i-1]+5*f[i-2]+f[i-3]-f[i-4];
	}
	cin>>t;
	while(t--)
	{
		cin>>n;
		cout<<f[n]<<"\n";
	}
}