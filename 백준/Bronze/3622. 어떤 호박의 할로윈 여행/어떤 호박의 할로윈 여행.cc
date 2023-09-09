#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a, b, c, d, e;
	cin>>a>>b>>c>>d>>e;
	if(a<=d&&c<=e) cout<<"Yes";
	else if(a<=e&&c<=b) cout<<"Yes";
	else if(a+c<=e) cout<<"Yes";
	else cout<<"No";
}