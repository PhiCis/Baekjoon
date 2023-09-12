#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a[3], b[3];
	cin>>a[0]>>a[1]>>a[2];
	cin>>b[0]>>b[1]>>b[2];
	sort(a, a+3);
	sort(b, b+3);
	if(a[0]==a[0] && a[1]==b[1] && a[2]==b[2] && a[0]*a[0]+a[1]*a[1]==a[2]*a[2]) cout<<"YES";
	else cout<<"NO";
}