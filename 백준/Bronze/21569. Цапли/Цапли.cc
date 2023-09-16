#include<bits/stdc++.h>
using namespace std;

int n, m;

int main()
{
	cin>>n>>m;
	if(n>m) swap(n, m);
	cout<<(m+1)/2<<" "<<n;
}