#include<bits/stdc++.h>
using namespace std;

int n, a[100100];
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	sort(a+1, a+n+1);
	cout<<a[1]+a[2];
}