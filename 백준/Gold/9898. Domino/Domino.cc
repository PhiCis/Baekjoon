#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n; cin>>n;
	vector<int> a(1010);
	a[0]=1;	a[1]=1;	a[2]=5;	a[3]=11;
	for(int i=4;i<=n;i++) a[i]=(a[i-1]+5*a[i-2]+a[i-3]-a[i-4]+1000)%1000;
	cout<<a[n];
}